cmake_minimum_required(VERSION 3.27)
project(test)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_VERBOSE_MAKEFILE ON)


add_executable(test main.cpp
        Nodes.cpp
        Nodes.h
        InnerNode.cpp
        InnerNode.h
        hash/hash.cpp
        hash/hash.h
        hash/Byte.cpp
        hash/Byte.h
        hash/layer/Layer.cpp
        hash/layer/Layer.h
        hash/layer/layers/Layer_1.cpp
        hash/layer/layers/Layer_1.h
        hash/layer/layers/Layer_2.cpp
        hash/layer/layers/Layer_2.h
        hash/layer/layers/Layer_3.cpp
        hash/layer/layers/Layer_3.h
        hash/layer/layers/Layer_4.cpp
        hash/layer/layers/Layer_4.h
        hash/layer/layers/Layer_5.cpp
        hash/layer/layers/Layer_5.h
)
