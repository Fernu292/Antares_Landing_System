# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Antares_land_system_autogen"
  "CMakeFiles/Antares_land_system_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Antares_land_system_autogen.dir/ParseCache.txt"
  )
endif()
