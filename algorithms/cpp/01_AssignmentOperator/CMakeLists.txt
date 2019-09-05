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

add_executable(01_AssignmentOperator_std 01_AssignmentOperator_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(01_AssignmentOperator_std_debug 01_AssignmentOperator_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(01_AssignmentOperator_practise 01_AssignmentOperator_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(01_AssignmentOperator_practise_test 01_AssignmentOperator_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions01_Assig Solutions.cpp ${SOURCE_FILES} ${SOURCES})
