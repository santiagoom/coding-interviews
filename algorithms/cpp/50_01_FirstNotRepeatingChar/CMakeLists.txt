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

add_executable(50_01_FirstNotRepeatingChar_std 50_01_FirstNotRepeatingChar_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(50_01_FirstNotRepeatingChar_std_debug 50_01_FirstNotRepeatingChar_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(50_01_FirstNotRepeatingChar_practise 50_01_FirstNotRepeatingChar_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(50_01_FirstNotRepeatingChar_practise_test 50_01_FirstNotRepeatingChar_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions50_01_Fi Solutions.cpp ${SOURCE_FILES} ${SOURCES})
