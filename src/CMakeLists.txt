set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE  ON)

include_directories(include)


add_library(complexnum OBJECT ComplexNum.cc)


target_include_directories(complexnum INTERFACE include)