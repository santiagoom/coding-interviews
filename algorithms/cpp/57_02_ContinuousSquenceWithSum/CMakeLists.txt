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

add_executable(57_02_ContinuousSquenceWithSum_std 57_02_ContinuousSquenceWithSum_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(57_02_ContinuousSquenceWithSum_std_debug 57_02_ContinuousSquenceWithSum_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(57_02_ContinuousSquenceWithSum_practise 57_02_ContinuousSquenceWithSum_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions57_02_Co Solutions.cpp ${SOURCE_FILES} ${SOURCES})
