#需求的最低cmake程序版本
cmake_minimum_required(VERSION 3.12)

#本工程的名字
project(OpenGL_GLFW)

#本工程支持的C++版本
set(CMAKE_CXX_STANDARD 17)

include_directories(SYSTEM ${CMAKE_CURRENT_SOURCE_DIR}/thirdParty/include)

link_directories(SYSTEM ${CMAKE_CURRENT_SOURCE_DIR}/thirdParty/lib)

#本工程主程序文件及输出程序名称
add_executable(GLFWStudy "main.cpp" "glad.c")

#将glfw3.lib链接入
target_link_libraries(GLFWStudy glfw3.lib)