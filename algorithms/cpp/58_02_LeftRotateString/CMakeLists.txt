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
add_executable(58_02_LeftRotateString_std 58_02_LeftRotateString_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(58_02_LeftRotateString_std_debug 58_02_LeftRotateString_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(58_02_LeftRotateString_practise 58_02_LeftRotateString_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(58_02_LeftRotateString_practise_test 58_02_LeftRotateString_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions58_02_Le Solutions.cpp ${SOURCE_FILES} ${SOURCES})
