cmake_minimum_required (VERSION 3.0.2)
project (tests)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -O3 -march=native -mtune=native -I../include")


add_executable(tests
	../src/popcount_u64.cpp
	../test/popcount_u64_ref.cpp
	../test/tests.cpp)

find_package(Catch2 3 REQUIRED)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
