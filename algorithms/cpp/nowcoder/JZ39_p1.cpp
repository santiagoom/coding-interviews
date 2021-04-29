#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//平衡二叉树
// 面试题55（二）：平衡二叉树
// 题目：输入一棵二叉树的根结点，判断该树是不是平衡二叉树。如果某二叉树中
// 任意结点的左右子树的深度相差不超过1，那么它就是一棵平衡二叉树。

class Solution {
public:
    bool IsBalanced_Solution(TreeNode *pRoot) {
        if (pRoot == nullptr) return true;

        int left = TreeDepth(pRoot->left);
        int right = TreeDepth(pRoot->right);
        int diff = left - right;
        if (diff > 1 || diff < -1) return false;

        return IsBalanced_Solution(pRoot->left) && IsBalanced_Solution(pRoot->right);
    }


    int TreeDepth(TreeNode *pRoot) {
        if (pRoot == nullptr) return 0;
        int left = TreeDepth(pRoot->left);
        int right = TreeDepth(pRoot->right);
        return left > right ? left + 1 : right + 1;
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