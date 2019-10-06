cmake_minimum_required(VERSION 3.14)
project(CXX)

set(CMAKE_CXX_STANDARD 14)

#file(GLOB SOURCES
#        ../Utilities/Array.h
#        ../Utilities/Array.cpp
#
#        ../Utilities/BinaryTree.h
#        ../Utilities/BinaryTree.cpp
#
#        ../Utilities/List.h
#        ../Utilities/List.cpp
#
#        ../Utilities/StringUtil.h
#        ../Utilities/StringUtil.cpp
#
#        ../Utilities/Tree.h
#        ../Utilities/Tree.cpp
#
#
#        ../utils/myListNode.h
#        ../utils/myListNode.cpp
#
#        ../utils/myTreeNode.h
#        ../utils/myTreeNode.cpp
#
#        ../utils/myutils.h
#        ../utils/myutils.cpp
#        )
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


add_executable(06_PrintListInReversedOrder_std 06_PrintListInReversedOrder_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(06_PrintListInReversedOrder_std_debug 06_PrintListInReversedOrder_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(06_PrintListInReversedOrder_practise 06_PrintListInReversedOrder_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(06_PrintListInReversedOrder_practise_test 06_PrintListInReversedOrder_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions06_Print Solutions.cpp ${SOURCE_FILES} ${SOURCES})
