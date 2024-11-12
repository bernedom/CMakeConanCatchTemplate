cmake_minimum_required(VERSION 3.25)

include(Catch)

add_executable(tests src/example_test.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

catch_discover_tests(tests)