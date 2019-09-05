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
        )

add_executable(16_Power_std 16_Power_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(16_Power_std_debug 16_Power_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(16_Power_practise 16_Power_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(16_Power_practise_test 16_Power_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions16_Power Solutions.cpp ${SOURCE_FILES} ${SOURCES})
