add_library(test_main OBJECT test_main.cpp)


INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})

add_executable(test1 test1.cpp $<TARGET_OBJECTS:test_main>)
add_test(NAME test1 COMMAND test1)

add_executable(test2 test2.cpp $<TARGET_OBJECTS:test_main>)
add_test(NAME test2 COMMAND test2)

SET(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin/tests)

#target_link_libraries (demo ALGORITHM_IMPL)
