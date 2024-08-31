cmake_minimum_required(VERSION 3.20) # 设置 cmake 最低版本
project(ffmpeg_demo_camke) # 设置解决方案名字
set(ffmpeg_lib_dir ${PROJECT_SOURCE_DIR}/../Dependencies/x64) # 设置变量，方便后面使用

include_directories(${ffmpeg_lib_dir}/include) # 设置增加包含目录
link_directories(${ffmpeg_lib_dir}/lib) # 设置附加库目录

add_executable(ffmpeg_demo main.cpp) # 创建工程名字为 ffmpeg_demo，向工程添加 main.cpp 文件
target_link_libraries(ffmpeg_demo PRIVATE avcodec.lib) # 向 ffmpeg_demo 工程，添加 avcodec.lib 依赖
