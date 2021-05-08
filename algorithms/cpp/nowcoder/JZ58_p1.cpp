# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

// 对称的二叉树
// 面试题28：对称的二叉树
// 题目：请实现一个函数，用来判断一棵二叉树是不是对称的。如果一棵二叉树和
// 它的镜像一样，那么它是对称的。
/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/

class Solution {
public:
    bool isSymmetrical(TreeNode *pRoot) {
        return isSame(pRoot, pRoot);
    }

    bool isSame(TreeNode *pRoot1, TreeNode *pRoot2) {
        if (pRoot1 == nullptr && pRoot2 == nullptr) return true;
        if (pRoot1 == nullptr || pRoot2 == nullptr) return false;
        return pRoot1->val == pRoot2->val && isSame(pRoot1->left, pRoot2->right) && isSame(pRoot1->right, pRoot2->left);
    }
};


int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
