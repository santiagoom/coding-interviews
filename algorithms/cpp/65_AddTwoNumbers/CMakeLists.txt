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

add_executable(65_AddTwoNumbers_std 65_AddTwoNumbers_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(65_AddTwoNumbers_std_debug 65_AddTwoNumbers_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(65_AddTwoNumbers_practise 65_AddTwoNumbers_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(65_AddTwoNumbers_practise_test 65_AddTwoNumbers_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions65_AddTw Solutions.cpp ${SOURCE_FILES} ${SOURCES})
