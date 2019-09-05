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

add_executable(03_02_DuplicationInArrayNoEdit_std 03_02_DuplicationInArrayNoEdit_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(03_02_DuplicationInArrayNoEdit_std_debug 03_02_DuplicationInArrayNoEdit_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(03_02_DuplicationInArrayNoEdit_practise 03_02_DuplicationInArrayNoEdit_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(03_02_DuplicationInArrayNoEdit_practise_test 03_02_DuplicationInArrayNoEdit_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions03_02_Du Solutions.cpp ${SOURCE_FILES} ${SOURCES})
