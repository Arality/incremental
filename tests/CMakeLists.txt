add_executable(tests
                test.cpp
                systems_tests.cpp
                util_tests)

# target_link_libraries(tests
#                     GTest::gtest_main
#                     EnTT::EnTT
#                     glfw)

target_link_libraries(tests 
                    main_lib
                    GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)