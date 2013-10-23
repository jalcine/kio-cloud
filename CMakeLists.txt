cmake_minimum_required(VERSION 2.8)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(KDE4 REQUIRED)
include_directories("${KDE4_INCLUDES}")

add_subdirectory(lib)
add_subdirectory(slaves)
#add_subdirectory(doc)
#add_subdirectory(config)
#add_subdirectory(test)
