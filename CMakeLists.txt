cmake_minimum_required(VERSION 3.5)
project(sistema LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(sistema main.cpp carro.cpp pessoa.cpp)


mkdir build
cd build
cmake ../
make
