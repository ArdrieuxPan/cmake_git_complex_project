project(planning_main)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)


 
# 添加动态库依赖
add_subdirectory(pnc_map)
add_subdirectory(process)



# 添加可执行文件
add_executable(${PROJECT_NAME} planning_main.cpp)



# 添加共享库文件及其包含的源文件和头文件
# 只关心下一级调用，下一级的下一级调用不涉及，所以没有pnc_map相关的链接
target_include_directories(${PROJECT_NAME} PUBLIC ${PROCESS_DIR})
target_link_libraries(${PROJECT_NAME} PUBLIC process)
