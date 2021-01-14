set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE  ON)


add_compile_options("-Wno-unused-function" "-Wno-unused-variable" "-Wno-unused-function")

link_libraries(dim)

add_executable(test_1 test_1.cc)
add_test(NAME "Test_constructors" COMMAND $<TARGET_FILE:test_1>)

add_executable(test_2 test_2.cc)
add_test(NAME "Test_string_operator" COMMAND $<TARGET_FILE:test_2>)

add_executable(test_3 test_3.cc)
add_test(NAME "Test_min_at" COMMAND $<TARGET_FILE:test_3>)

add_executable(test_4 test_4.cc)
add_test(NAME "Test_sum" COMMAND $<TARGET_FILE:test_4>)

add_executable(test_5 test_5.cc)
add_test(NAME "Test_reorder" COMMAND $<TARGET_FILE:test_5>)
