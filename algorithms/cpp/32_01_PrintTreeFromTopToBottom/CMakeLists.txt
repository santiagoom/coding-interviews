cmake_minimum_required(VERSION 3.14)
project(CXX)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCES
        ../Utilities/Array.h
        ../Utilities/Array.cpp

        ../Utilities/BinaryTree.h
        ../Utilities/BinaryTree.cpp

        ../Utilities/List.h
        ../Utilities/List.cpp

        ../Utilities/StringUtil.h
        ../Utilities/StringUtil.cpp

        ../Utilities/Tree.h
        ../Utilities/Tree.cpp
        )

add_executable(32_01_PrintTreeFromTopToBottom_std 32_01_PrintTreeFromTopToBottom_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(32_01_PrintTreeFromTopToBottom_std_debug 32_01_PrintTreeFromTopToBottom_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(32_01_PrintTreeFromTopToBottom_practise 32_01_PrintTreeFromTopToBottom_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions32_01_Pr Solutions.cpp ${SOURCE_FILES} ${SOURCES})
