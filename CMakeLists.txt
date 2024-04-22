cmake_minimum_required(VERSION 3.10)
project(planning_complex_demo
    VERSION         0.0.1
    DESCRIPTION     "demo of complex cmake project"
    HOMEPAGE_URL    "https://github.com/ArdrieuxPan/cmake_git_complex_project"
    LANGUAGES       CXX
)
set(CMAKE_CXX_STANDARD 17)

# 设置变量
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# 设置目录
set(PROCESS_DIR ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_MAP_DIR ${CMAKE_SOURCE_DIR}/src/pnc_map)


# 因为当前层级没有代码文件，所以直接添加子目录
add_subdirectory(src)