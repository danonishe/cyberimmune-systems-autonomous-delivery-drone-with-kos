file(REMOVE_RECURSE
  "_headers_/drone_controller/FlightController.edl.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/flight_controller_edl_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
