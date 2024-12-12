
add_executable(MyTests tests.cpp)

target_link_libraries(MyTests PRIVATE MyClass gtest gtest_main)

enable_testing()
add_test(NAME MyTests COMMAND MyTests)
