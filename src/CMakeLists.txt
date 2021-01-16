set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE  ON)

include_directories(include)


add_library(thing OBJECT TheThing.cc)
target_include_directories(thing INTERFACE include)

add_library(thing_generator OBJECT ThingGenerator.cc)
target_include_directories(thing_generator INTERFACE include)

