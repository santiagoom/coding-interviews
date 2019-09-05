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

add_executable(27_MirrorOfBinaryTree_std 27_MirrorOfBinaryTree_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(27_MirrorOfBinaryTree_std_debug 27_MirrorOfBinaryTree_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(27_MirrorOfBinaryTree_practise 27_MirrorOfBinaryTree_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions27_Mirro Solutions.cpp ${SOURCE_FILES} ${SOURCES})
