cmake_minimum_required(VERSION 3.22)

add_executable(calculator main.cpp ${MY_INCLUDE_DIR}/calculator.ui ${MY_INCLUDE_DIR}/calculator.h calculator.cpp)

target_include_directories(calculator PRIVATE ${MY_INCLUDE_DIR})
