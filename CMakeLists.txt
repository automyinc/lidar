cmake_minimum_required(VERSION 2.6)
project(automy-lidar)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fPIC -pthread")

file(GLOB GENERATED_SOURCE_FILES generated/src/*.cpp)

add_library(automy_lidar SHARED
	${GENERATED_SOURCE_FILES}
	src/LidarInfo.cpp
)

target_include_directories(automy_lidar PUBLIC include generated/include)

target_link_libraries(automy_lidar automy_vehicle automy_basic automy_math vnx_base)

install(DIRECTORY include/ DESTINATION include/automy)
install(DIRECTORY generated/include/ DESTINATION include/automy)
install(DIRECTORY interface/ DESTINATION interface/automy/lidar)

install(TARGETS automy_lidar DESTINATION lib)
