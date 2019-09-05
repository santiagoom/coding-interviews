#include <iostream>
#include "myTreeNode.h"

using namespace std;

class Solution {

};


int main() {
//       1
//     /  \
//    2   3
//  /  \
// 4   5
    auto *so = new Solution();
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    inorderTraversal(root);
    preorderTraversal(root);
    postorderTraversal(root);

    delete so;
    return 0;
}
