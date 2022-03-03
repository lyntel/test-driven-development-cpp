include(gtest.cmake)

set(TEST_NAME ut_test)
add_executable(${TEST_NAME})
target_sources(${TEST_NAME} PRIVATE unit_test.cpp)
target_link_libraries(${TEST_NAME} PRIVATE gmock_main test-driven-development-cpp)

add_test(${TEST_NAME} ${TEST_NAME} --gtest_output=xml:${CMAKE_BINARY_DIR}/test_report/${TEST_NAME}.xml)
set_tests_properties(${TEST_NAME} PROPERTIES TIMEOUT 600)