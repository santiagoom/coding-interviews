#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;
<<<<<<< HEAD
=======

>>>>>>> 1c173a81fa472e383f0c1bc643f6309b4e4effab
// 面试题7：重建二叉树
// 题目：输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输
// 入的前序遍历和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列{1,
// 2, 4, 7, 3, 5, 6, 8}和中序遍历序列{4, 7, 2, 1, 5, 3, 8, 6}，则重建出
// 图2.6所示的二叉树并输出它的头结点。
class Solution {
public:
    TreeNode *reConstructBinaryTree(vector<int> &pre, vector<int> &vin) {
        if (pre.empty() || pre.size() != vin.size())
            return nullptr;

        int length = pre.size();
        return constructHelper(pre, 0, length - 1, vin, 0, length - 1);
    }

private:
    TreeNode *constructHelper(vector<int> &pre, int startPre, int endPre, vector<int> &vin, int startVin, int endVin) {
        int rootValue = pre[startPre];
        TreeNode *root = new TreeNode(rootValue);

        if (pre[startPre] == pre[endPre]) {
            if (vin[startVin] == vin[endVin] && pre[startPre] == vin[startVin])
                return root;
            else
                throw invalid_argument("invalid_argument");
        }

        int rootPos = startVin;
        while (startVin <= endVin && rootValue != vin[rootPos])
            rootPos++;
        if (rootPos == endVin && rootValue != vin[rootPos])
            throw invalid_argument("invalid_argument");

        int leftLength = rootPos - startVin;
        int leftPreEnd = startPre + leftLength;

        if (0 < leftLength)
            root->left = constructHelper(pre, startPre + 1, leftPreEnd, vin, startVin, rootPos - 1);
        if (leftLength < endPre - startPre)
            root->right = constructHelper(pre, leftPreEnd + 1, endPre, vin, rootPos + 1, endVin);

        return root;
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
    