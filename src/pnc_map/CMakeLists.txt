project(pnc_map)



# 封装自身代表的动态库
add_library(${PROJECT_NAME} SHARED pnc_map.cpp)
