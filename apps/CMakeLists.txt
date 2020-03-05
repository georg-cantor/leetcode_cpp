add_executable(app app.cpp)
target_compile_features(app PRIVATE cxx_std_17)
find_package(fmt REQUIRED)
target_link_libraries(app PRIVATE solutions_library fmt::fmt)
