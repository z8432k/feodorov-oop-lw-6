set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE  ON)

include_directories(include)


add_library(complexnum OBJECT ComplexNum.cc)

add_executable(lab3 lab3.cc)
target_link_libraries(lab3 complexnum)

target_include_directories(complexnum INTERFACE include)