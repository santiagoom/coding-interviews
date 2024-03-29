#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 面试题36：二叉搜索树与双向链表
// 题目：输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。要求
// 不能创建任何新的结点，只能调整树中结点指针的指向。
// pRootOfTree 不等于最小值节点

class Solution {
public:
    TreeNode *Convert(TreeNode *pRootOfTree) {
        TreeNode *pLastNodeInList = nullptr;
        ConvertNode(pRootOfTree, &pLastNodeInList);
        TreeNode *pHeadOfList = pLastNodeInList;
        while (pHeadOfList != nullptr && pHeadOfList->left != nullptr)
            pHeadOfList = pHeadOfList->left;

        return pHeadOfList;
    }

    void ConvertNode(TreeNode *pNode, TreeNode **pLastNodeInList) {
        if (pNode == nullptr)
            return;
        TreeNode *pCurrent = pNode;
        if (pCurrent->left != nullptr)
            ConvertNode(pCurrent->left, pLastNodeInList);
        pCurrent->left = *pLastNodeInList;
        if (*pLastNodeInList != nullptr)
            (*pLastNodeInList)->right = pCurrent;
        *pLastNodeInList = pCurrent;
        if (pCurrent->right != nullptr)
            ConvertNode(pCurrent->right, pLastNodeInList);
    }
};

int main() {
    auto *so = new Solution();
    vector<int> nums{1, 2, 3, 4, 5, 6};
    string str = "coding for fun!";
    vector<vector<int> > array = {
            {1, 2, 8,  9},
            {2, 4, 9,  12},
            {4, 7, 10, 13},
            {6, 8, 11, 15}
    };
    CppUtils::print_1d_vector(nums);
    CppUtils::print_2d_vector(array);
    CppUtils::print(str);
    delete so;
    return 0;
}

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                