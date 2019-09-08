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

add_executable(59_02_QueueWithMax_std 59_02_QueueWithMax_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(59_02_QueueWithMax_std_debug 59_02_QueueWithMax_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(59_02_QueueWithMax_practise 59_02_QueueWithMax_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(59_02_QueueWithMax_practise_test 59_02_QueueWithMax_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions59_02_Qu Solutions.cpp ${SOURCE_FILES} ${SOURCES})
