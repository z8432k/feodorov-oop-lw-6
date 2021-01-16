set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE  ON)


add_compile_options("-Wno-unused-function" "-Wno-unused-variable" "-Wno-unused-function")

link_libraries(thing_generator thing)

add_executable(test_1 test_1.cc)
add_test(NAME "Test_generator" COMMAND $<TARGET_FILE:test_1>)

add_executable(test_2 test_2.cc)
add_test(NAME "Test_reverse" COMMAND $<TARGET_FILE:test_2>)

add_executable(test_3 test_3.cc)
add_test(NAME "Test_algo_apply" COMMAND $<TARGET_FILE:test_3>)

add_executable(test_4 test_4.cc)
add_test(NAME "Test_countNonZero" COMMAND $<TARGET_FILE:test_4>)

