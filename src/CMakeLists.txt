set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE  ON)

include_directories(include)


add_library(board OBJECT Board.cc)
target_include_directories(board INTERFACE include)

add_library(composition OBJECT Composition.cc)
target_include_directories(composition INTERFACE include)
link_libraries(composition board)

