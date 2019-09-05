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

add_executable(56_01_NumbersAppearOnce_std 56_01_NumbersAppearOnce_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(56_01_NumbersAppearOnce_std_debug 56_01_NumbersAppearOnce_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(56_01_NumbersAppearOnce_practise 56_01_NumbersAppearOnce_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(56_01_NumbersAppearOnce_practise_test 56_01_NumbersAppearOnce_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions56_01_Nu Solutions.cpp ${SOURCE_FILES} ${SOURCES})
