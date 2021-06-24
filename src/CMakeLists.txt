cmake_minimum_required(VERSION 3.1.0)
project(ccprimer-test)

#dependencies
set(GTESTX_PROJECT ../thirdparty/gtestx-1.0.0-beta2)
include_directories(${GTESTX_PROJECT}/src)

# Now simply link against gtest or gtest_main as needed. 
add_executable(cunit-test
    ${GTESTX_PROJECT}/src/gtestx/gtestx.cc
    unittest.cpp
    perftest.cpp)
target_link_libraries(cunit-test gtest_main gflags)
