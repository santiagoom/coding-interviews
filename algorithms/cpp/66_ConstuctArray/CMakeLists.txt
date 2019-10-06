cmake_minimum_required(VERSION 3.14)
project(CXX)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCES
        ../cppUtils/Utilities/Array.h
        ../cppUtils/Utilities/Array.cpp

        ../cppUtils/Utilities/BinaryTree.h
        ../cppUtils/Utilities/BinaryTree.cpp

        ../cppUtils/Utilities/List.h
        ../cppUtils/Utilities/List.cpp

        ../cppUtils/Utilities/StringUtil.h
        ../cppUtils/Utilities/StringUtil.cpp

        ../cppUtils/Utilities/Tree.h
        ../cppUtils/Utilities/Tree.cpp


        ../cppUtils/utils/myListNode.h
        ../cppUtils/utils/myListNode.cpp

        ../cppUtils/utils/myTreeNode.h
        ../cppUtils/utils/myTreeNode.cpp

        ../cppUtils/utils/myVector.h
        ../cppUtils/utils/myVector.cpp

        ../cppUtils/utils/myutils.h
        ../cppUtils/utils/myutils.cpp
        )
add_executable(66_ConstuctArray_std 66_ConstuctArray_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(66_ConstuctArray_std_debug 66_ConstuctArray_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(66_ConstuctArray_practise 66_ConstuctArray_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(66_ConstuctArray_practise_test 66_ConstuctArray_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions66_Const Solutions.cpp ${SOURCE_FILES} ${SOURCES})
