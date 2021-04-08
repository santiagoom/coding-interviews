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
    bool isSame(TreeNode *root1, TreeNode *root2) {
        if (!root1 && !root2)return true;
        if (!root1 || !root2)return false;
//         if(root1->val == root2->val)
//             return isSame(root1->left, root2->right) && isSame(root1->right, root2->left);
//         else
//             return false;
        return root1->val == root2->val && isSame(root1->left, root2->right) && isSame(root1->right, root2->left);
    }

    bool isSymmetrical(TreeNode *pRoot) {
        return isSame(pRoot, pRoot);
    }

};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
