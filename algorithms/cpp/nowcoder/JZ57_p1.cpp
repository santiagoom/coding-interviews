#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//二叉树的下一个结点
// 面试题8：二叉树的下一个结点
// 题目：给定一棵二叉树和其中的一个结点，如何找出中序遍历顺序的下一个结点？
// 树中的结点除了有两个分别指向左右子结点的指针以外，还有一个指向父结点的指针。

struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;

    TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {

    }
};

class Solution {
public:
    TreeLinkNode *GetNext(TreeLinkNode *pNode) {
        if (pNode == nullptr) return nullptr;

        TreeLinkNode *pNext = nullptr;

        if (pNode->right != nullptr) {
            TreeLinkNode *pRight = pNode->right;
            while (pRight->left != nullptr) {
                pRight = pRight->left;
            }
            pNext = pRight;
        } else if (pNode->next != nullptr) {
            TreeLinkNode *pParent = pNode->next;
            TreeLinkNode *pCurrent = pNode;
            while (pParent != nullptr && pCurrent == pParent->right) {
                pParent = pParent->next;
                pCurrent = pCurrent->next;
            }
            pNext = pParent;
        }
        return pNext;
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

