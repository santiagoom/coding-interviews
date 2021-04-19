#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 面试题7：重建二叉树
// 题目：输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输
// 入的前序遍历和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列
// {1, 2, 4, 7, 3, 5, 6, 8}和中序遍历序列{4, 7, 2, 1, 5, 3, 8, 6}，则重建出
// 图2.6所示的二叉树并输出它的头结点。

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode *reConstructBinaryTree(vector<int> pre, vector<int> vin) {
        if (pre.empty() || pre.size() != vin.size())
            return nullptr;
        int length = pre.size();
        return constructHelper(pre, 0, length - 1, vin, 0, length - 1);
    }

    TreeNode *constructHelper(vector<int> pre, int preStart, int preEnd, vector<int> vin, int vinStart, int vinEnd) {
        int rootVal = pre[preStart];
        TreeNode *root = new TreeNode(rootVal);

        if (pre[preStart] == pre[preEnd]) {
            if (vin[vinStart] == vin[vinEnd] && pre[preStart] == vin[vinStart])
                return root;
            else
                throw invalid_argument("invalid input");
        }

        int rootPos = vinStart;
//        wrong
//        for (int i = 0; i <= vin.size(); ++i) {
//            if (vin[i] == rootVal) {
//                break;
//            }
//            rootPos++;
//        }

        for (int i = vinStart; i <= vinEnd; ++i) {
            if (vin[i] == rootVal) {
                break;
            }
            rootPos++;
        }

//        while (vinStart <= vinEnd && rootVal != vin[rootPos])
//            rootPos++;
        if (rootPos == vinEnd && rootVal != vin[rootPos])
            throw invalid_argument("invalid_argument");

        CppUtils::print(rootPos);
        if (vinStart == vinEnd && vin[rootPos] != rootVal)
            throw invalid_argument("invalid input");

        int leftLength = rootPos - vinStart;
//        int leftEnd = preStart + leftLength;
        if (leftLength > 0)
            root->left = constructHelper(pre, preStart + 1, preStart + leftLength, vin, vinStart,
                                         rootPos - 1);
        if (leftLength < preEnd - preStart)
            root->right = constructHelper(pre, preStart + leftLength + 1, preEnd, vin, rootPos + 1,
                                          vinEnd);
        return root;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> pre{1, 2, 4, 7, 3, 5, 6, 8};
    vector<int> vin{4, 7, 2, 1, 5, 3, 8, 6};
    TreeNode *res = so->reConstructBinaryTree(pre, vin);
    CppUtils::preorderTraversal(res);
    CppUtils::print();
    CppUtils::inorderTraversal(res);
    delete so;
    return 0;
}
