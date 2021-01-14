set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE  ON)

include_directories(include)


add_library(dim OBJECT Dim.cc)
target_include_directories(dim INTERFACE include)


