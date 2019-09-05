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

add_executable(18_02_DeleteDuplicatedNode_std 18_02_DeleteDuplicatedNode_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(18_02_DeleteDuplicatedNode_std_debug 18_02_DeleteDuplicatedNode_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(18_02_DeleteDuplicatedNode_practise 18_02_DeleteDuplicatedNode_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions18_02_De Solutions.cpp ${SOURCE_FILES} ${SOURCES})
