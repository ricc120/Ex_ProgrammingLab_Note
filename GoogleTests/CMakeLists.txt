cmake_minimum_required(VERSION 3.5)

set(CXX_STANDARD 11)

add_subdirectory(GoogleTestsLib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp NoteTest.cpp CollectionTest.cpp NoteCounterTest.cpp)
add_executable(runAllTests ${TEST_SOURCE_FILES})
target_link_libraries(runAllTests gtest gtest_main core)

