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

add_executable(13_RobotMove_std 13_RobotMove_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(13_RobotMove_std_debug 13_RobotMove_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(13_RobotMove_practise 13_RobotMove_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(13_RobotMove_practise_test 13_RobotMove_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions13_Robot Solutions.cpp ${SOURCE_FILES} ${SOURCES})
