#include "kss/audit-gen-api.h"
#include "kss/audit.h"
#include "kss/kss.h"
#include "kss/types.h"
#include "kssaudit/constants.h"
#include "kssaudit/decode.h"
#include "kssaudit/machine.h"
#include "kssaudit/segment.h"
#include "nk/types.h"
static const nk_size_t psl_segment_bytes_len = 32U;
static const nk_uint8_t psl_segment_bytes[] = {0x02, 0x00, 0x00, 0x80, 0x00,
                                               0x00, 0x00, 0x90, 0x00, 0x00,
                                               0x00, 0x00, 0x20, 0x00, 0x00,
                                               0x00, 0x01, 0x00, 0x00, 0x00,
                                               0x20, 0x00, 0x00, 0x00, 0x00,
                                               0x00, 0x00, 0x00, 0x20, 0x00,
                                               0x00, 0x00};
nk_err_t __kss_audit_decode(const void *msg, const void *data, char *buf, const
                            nk_size_t size)
{
    int rc = NK_EOK;
    nk_size_t written;
    const kss_audit_header *header = (const kss_audit_header *) msg;
    nk_size_t min_size = nk_min(size - 1, header->size);
    
    switch (header->tag) {
        
      case KSS_AUDIT_MESSAGE_FORMAT_PLAINTEXT:
        nk_memcpy(buf, data, min_size);
        buf[min_size] = '\0';
        rc = NK_EOK;
        break;
        
      case KSS_AUDIT_MESSAGE_FORMAT_CBOR:
        written = CBOR_to_JSON((const nk_uint8_t *) data, header->size, buf,
                               size);
        if (written > size) {
            rc = NK_ENOMEM;
            break;
        }
        break;
        
      default:
        rc = machine_run_providers(header->tag, data, (nk_size_t) header->size,
                                   psl_segment_bytes, psl_segment_bytes_len,
                                   buf, size - 1, &written);
        buf[rc == NK_EOK ? nk_max(written, size - 1) : size - 1] = '\0';
    }
    return rc;
}
