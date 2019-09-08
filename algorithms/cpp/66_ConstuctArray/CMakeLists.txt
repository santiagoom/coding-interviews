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


        ../utils/myListNode.h
        ../utils/myListNode.cpp

        ../utils/myTreeNode.h
        ../utils/myTreeNode.cpp
        
        ../utils/myutils.h
        ../utils/myutils.cpp
        )

add_executable(66_ConstuctArray_std 66_ConstuctArray_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(66_ConstuctArray_std_debug 66_ConstuctArray_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(66_ConstuctArray_practise 66_ConstuctArray_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(66_ConstuctArray_practise_test 66_ConstuctArray_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions66_Const Solutions.cpp ${SOURCE_FILES} ${SOURCES})
