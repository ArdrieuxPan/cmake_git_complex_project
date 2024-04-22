project(process)



# 封装自身代表的动态库
add_library(${PROJECT_NAME} SHARED process.cpp)     



# 链接依赖的动态库及其源文件和头文件
target_include_directories(${PROJECT_NAME} PUBLIC ${PNC_MAP_DIR})
target_link_libraries(${PROJECT_NAME} PUBLIC pnc_map)    