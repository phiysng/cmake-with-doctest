set(CMAKE_CXX_STANDARD 14)

add_library (Sqr quick_sort.cpp)


add_executable (demo main.cxx)
target_link_libraries (demo Sqr)