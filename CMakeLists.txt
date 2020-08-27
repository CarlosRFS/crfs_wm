cmake_minimum_required(VERSION 3.7.1)
Project(CRFS_WindowManager)


find_package(X11 REQUIRED)

add_executable(crfs_wm main.cpp)
target_link_libraries(crfs_wm X11)
