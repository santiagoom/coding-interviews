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

add_executable(15_NumberOf1InBinary_std 15_NumberOf1InBinary_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(15_NumberOf1InBinary_std_debug 15_NumberOf1InBinary_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(15_NumberOf1InBinary_practise 15_NumberOf1InBinary_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(15_NumberOf1InBinary_practise_test 15_NumberOf1InBinary_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions15_Numbe Solutions.cpp ${SOURCE_FILES} ${SOURCES})
