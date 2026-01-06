cmake_minimum_required(VERSION 3.10)
project(MyCppProject LANGUAGES CXX) # CXXはC++を指す

set(CMAKE_CXX_STANDARD 17) # C++17規格を使用
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C++_train src/main.cpp)