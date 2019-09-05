#include <iostream>
#include "myTreeNode.h"

using namespace std;

void inorderTraversal(TreeNode *root) {
    if (!root)
        return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}


void preorderTraversal(TreeNode *root) {
    if (!root)
        return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);

}


void postorderTraversal(TreeNode *root) {
    if (!root)
        return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}


