
# Testing library
FetchContent_Declare(
catch2
GIT_REPOSITORY https://github.com/catchorg/Catch2.git
GIT_TAG        v2.9.1
)
# FetchContent_MakeAvailable(catch2)
# list(APPEND CMAKE_PREFIX_PATH "/usr/include/catch2/")
# find_package(catch2 REQUIRED) 
# Adds Catch2::Catch2
# add_subdirectory(extern/Catch2)

aux_source_directory(. EXECUTABLE)
foreach(T_FILE_NAME ${EXECUTABLE})
    get_filename_component(EXECUTABLE_NAME ${T_FILE_NAME} NAME_WE)
    # Tests need to be added as executables first
    add_executable(${EXECUTABLE_NAME} ${T_FILE_NAME})
    # I'm using C++17 in the test
    target_compile_features(${EXECUTABLE_NAME} PRIVATE cxx_std_17)
    # Should be linked to the main library, as well as the Catch2 testing library
    target_link_libraries(${EXECUTABLE_NAME} PRIVATE solutions_library Catch2::Catch2)

    # If you register a test, then ctest and make test will run it.
    # You can also run examples and check the output, as well.
    add_test(NAME ${EXECUTABLE_NAME} COMMAND ${EXECUTABLE_NAME}) # Command can be a target
endforeach()

