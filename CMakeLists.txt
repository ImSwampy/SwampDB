cmake_minimum_required(VERSION 3.27)
project(test)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_VERBOSE_MAKEFILE ON)


add_executable(test main.cpp
        database/nodes/Nodes.cpp
        database/nodes/Nodes.h
        database/nodes/inner_nodes/InnerNode.cpp
        database/nodes/inner_nodes/InnerNode.h
        hash/hash.cpp
        hash/hash.h
        hash/Byte.cpp
        hash/Byte.h
        hash/layer/Layer.cpp
        hash/layer/Layer.h
        database/boards/Board.cpp
        database/boards/Board.h
        database/boards/Board.h
        database/boards/board_types/Hierarchical.cpp
        database/boards/board_types/Hierarchical.h
        database/boards/board_types/Individual.cpp
        database/boards/board_types/Individual.h
        database/boards/board_types/Group.cpp
        database/boards/board_types/Group.h
        database/boards/board_types/Board_Preset.cpp
        database/boards/board_types/Board_Preset.h
        database/nodes/types/node_types.h
)
