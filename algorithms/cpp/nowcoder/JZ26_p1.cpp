#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 面试题36：二叉搜索树与双向链表
// 题目：输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。要求
// 不能创建任何新的结点，只能调整树中结点指针的指向。
// pRootOfTree 不等于最小值节点

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/

// 中序遍历, 需要右移pLastNode, (*pLastNode) = pCurrent;


class Solution {
public:
    TreeNode *Convert(TreeNode *pRootOfTree) {
        TreeNode *pLastNode = nullptr;
        ConvertNode(pRootOfTree, &pLastNode);
        TreeNode *pHeadNode = pLastNode;
        while (pHeadNode != nullptr && pHeadNode->left != nullptr)
            pHeadNode = pHeadNode->left;

        return pHeadNode;
    }

    void ConvertNode(TreeNode *pNode, TreeNode **pLastNode) {
        if (pNode == nullptr)
            return;
        TreeNode *pCurrent = pNode;
        if (pCurrent->left != nullptr)
            ConvertNode(pCurrent->left, pLastNode);

        pCurrent->left = *pLastNode;
        if (*pLastNode != nullptr)
            (*pLastNode)->right = pCurrent;
        (*pLastNode) = pCurrent;

        if (pCurrent->right != nullptr)
            ConvertNode(pCurrent->right, pLastNode);
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
