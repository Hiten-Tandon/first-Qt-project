# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/MyProj_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/MyProj_autogen.dir/ParseCache.txt"
  "MyProj_autogen"
  )
endif()