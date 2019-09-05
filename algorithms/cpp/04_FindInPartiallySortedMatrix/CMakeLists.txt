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

add_executable(04_FindInPartiallySortedMatrix_std 04_FindInPartiallySortedMatrix_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(04_FindInPartiallySortedMatrix_std_debug 04_FindInPartiallySortedMatrix_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(04_FindInPartiallySortedMatrix_practise 04_FindInPartiallySortedMatrix_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(04_FindInPartiallySortedMatrix_practise_test 04_FindInPartiallySortedMatrix_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions04_FindI Solutions.cpp ${SOURCE_FILES} ${SOURCES})
