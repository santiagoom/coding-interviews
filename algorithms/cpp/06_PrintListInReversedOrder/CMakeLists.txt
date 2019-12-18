cmake_minimum_required(VERSION 3.14)
project(CXX)

set(CMAKE_CXX_STANDARD 14)
#
#file(GLOB SOURCES
#        ../../../utils/cppUtils/Utilities/Array.h
#        ../../../utils/cppUtils/Utilities/Array.cpp
#
#        ../../../utils/cppUtils/Utilities/BinaryTree.h
#        ../../../utils/cppUtils/Utilities/BinaryTree.cpp
#
#        ../../../utils/cppUtils/Utilities/List.h
#        ../../../utils/cppUtils/Utilities/List.cpp
#
#        ../../../utils/cppUtils/Utilities/StringUtil.h
#        ../../../utils/cppUtils/Utilities/StringUtil.cpp
#
#        ../../../utils/cppUtils/Utilities/Tree.h
#        ../../../utils/cppUtils/Utilities/Tree.cpp
#
#
#        ../../../utils/cppUtils/utils/myListNode.h
#        ../../../utils/cppUtils/utils/myListNode.cpp
#
#        ../../../utils/cppUtils/utils/myTreeNode.h
#        ../../../utils/cppUtils/utils/myTreeNode.cpp
#
#        ../../../utils/cppUtils/utils/myVector.h
#        ../../../utils/cppUtils/utils/myVector.cpp
#
#        ../../../utils/cppUtils/utils/myutils.h
#        ../../../utils/cppUtils/utils/myutils.cpp
#        )


#file(GLOB SOURCES
#        ../../../utils/cppUtils/Utilities/Array.h
#        ../../../utils/cppUtils/Utilities/Array.cpp
#
#        ../../../utils/cppUtils/Utilities/BinaryTree.h
#        ../../../utils/cppUtils/Utilities/BinaryTree.cpp
#
#        ../../../utils/cppUtils/Utilities/List.h
#        ../../../utils/cppUtils/Utilities/List.cpp
#
#        ../../../utils/cppUtils/Utilities/StringUtil.h
#        ../../../utils/cppUtils/Utilities/StringUtil.cpp
#
#        ../../../utils/cppUtils/Utilities/Tree.h
#        ../../../utils/cppUtils/Utilities/Tree.cpp
#
#
#        ../../../utils/cppUtils/utils/myListNode.h
#        ../../../utils/cppUtils/utils/myListNode.cpp
#
#        ../../../utils/cppUtils/utils/myTreeNode.h
#        ../../../utils/cppUtils/utils/myTreeNode.cpp
#
#        ../../../utils/cppUtils/utils/myVector.h
#        ../../../utils/cppUtils/utils/myVector.cpp
#
#        ../../../utils/cppUtils/utils/myutils.h
#        ../../../utils/cppUtils/utils/myutils.cpp
#        )

add_executable(06_PrintListInReversedOrder_std 06_PrintListInReversedOrder_std.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(06_PrintListInReversedOrder_std_debug 06_PrintListInReversedOrder_std_debug.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(06_PrintListInReversedOrder_practise 06_PrintListInReversedOrder_practise.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(06_PrintListInReversedOrder_practise_test 06_PrintListInReversedOrder_practise_test.cpp ${SOURCE_FILES} ${SOURCES})
add_executable(Solutions06_Print Solutions.cpp ${SOURCE_FILES} ${SOURCES})
