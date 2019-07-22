cmake_minimum_required(VERSION 3.10)
project(prj2_zinx_study)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

#首先定义两个变量INC_DIR和LINK_DIR，用来表示头文件路径和库的路径：
set(INC_DIR /usr/include)
set(LINK_DIR /usr/lib)
#然后依次设置头文件目录、库目录、要链接的库：
include_directories(${INC_DIR})
link_directories(${LINK_DIR})
link_libraries(libzinx.so)

add_executable(untitled
        main.cpp
        controller/lv1_Ichannel__stdin_channel.cpp
        controller/lv1_Ichannel__stdin_channel.h
        head_class.cpp
        head_class.h
        controller/lv0_AZinxHandler__cmd.cpp
        controller/lv0_AZinxHandler__cmd.h
        controller/lv1_Ichannel__stdout_channel.cpp
        controller/lv1_Ichannel__stdout_channel.h controller/lv0_AZinxHandler__echo.cpp controller/lv0_AZinxHandler__echo.h controller/lv0_AZinxHandler__exitFramework.cpp controller/lv0_AZinxHandler__exitFramework.h controller/lv0_AZinxHandler__output_mng.cpp controller/lv0_AZinxHandler__output_mng.h)

#使用如下语句完成库的链接操作：
target_link_libraries(untitled libzinx.so)

#使用多线程 报错 “对‘pthread_create’未定义的引用”解决：
find_package(Threads REQUIRED)
target_link_libraries(untitled Threads::Threads)
