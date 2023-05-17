cmake_minimum_required(VERSION 3.25)
project(pcltest)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_TOOLCHAIN_FILE /Users/USERNAME/.clion-vcpkg/vcpkg/scripts/buildsystems/vcpkg.cmake)
set(Boost_NO_WARN_NEW_VERSIONS 1)

add_executable(${PROJECT_NAME} main.cpp)

find_package(PCL 1.13 REQUIRED COMPONENTS common io)
target_include_directories(${PROJECT_NAME} PUBLIC ${PCL_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PRIVATE  ${PCL_LIBRARIES})
