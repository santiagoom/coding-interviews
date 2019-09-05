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

add_executable(30_MinInStack_std 30_MinInStack_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(30_MinInStack_std_debug 30_MinInStack_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(30_MinInStack_practise 30_MinInStack_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(30_MinInStack_practise_test 30_MinInStack_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions30_MinIn Solutions.cpp ${SOURCE_FILES} ${SOURCES})
