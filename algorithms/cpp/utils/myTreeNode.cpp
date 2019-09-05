//
// Created by tianm on 2019-09-05.
//
#include <iostream>
#include <cstdio>
#include "myTreeNode.h"

#include <cstdio>



TreeNode *inorderTraversal(TreeNode *root) {
    if (root == nullptr)
        return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);

}