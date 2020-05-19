# Note that headers are optional, and do not affect add_library, but they will not
# show up in IDEs unless they are listed in add_library.

# Optionally glob, but only for CMake 3.12 or later:
# file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${ModernCMakeExample_SOURCE_DIR}/include/modern/*.hpp")
message(STATUS "SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
set(HEADER_LIST "${CMAKE_SOURCE_DIR}/include/solutions/lib.hpp" ../include/complex.hpp)
message(STATUS "HEADER_LIST: ${HEADER_LIST}")

# Make an automatic library - will be static or dynamic based on user setting
add_library(solutions_library lib.cpp ${HEADER_LIST} complex.cpp)

# We need this directory, and users of our library will need it too
target_include_directories(solutions_library PUBLIC ../include)

# This depends on (header only) boost
# target_link_libraries(solutions_library PRIVATE Boost::boost)

# All users of this library will need at least C++11
target_compile_features(solutions_library PUBLIC cxx_std_11)

# IDEs should put the headers in a nice place
# source_group(TREE "${PROJECT_SOURCE_DIR}/include" PREFIX "Header Files" FILES ${HEADER_LIST})

