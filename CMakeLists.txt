cmake_minimum_required(VERSION 3.1)

project(CStack)

include_directories(${PROJECT_SOURCE_DIR})

set (CStack_SRC  main.cpp autotest.cpp func.cpp)
set (CStack_HDR CStack.h)
set (CStack_OTH auto1.txt auto2.txt Text1.txt Text2.txt)

add_executable (${PROJECT_NAME} ${CStack_SRC} ${CStack_HDR} ${CStack_OTH})