#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//二叉树中和为某一值的路径
// 面试题34：二叉树中和为某一值的路径
// 题目：输入一棵二叉树和一个整数，打印出二叉树中结点值的和为输入整数的所
// 有路径。从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。
// 必须是引用传参数--反复迭代通一个地址
// vector<vector<int> > &paths, vector<int> &path, int expectNumber, int &currentNumber
class Solution {
public:
    vector<vector<int> > FindPath(TreeNode *root, int expectNumber) {
        if (root == nullptr)
            return {};
        vector<vector<int> > paths;
        vector<int> path;
        int currentSum = 0;
        FindPath(root, expectNumber, paths, path, currentSum);
        return paths;
    }

    void FindPath(TreeNode *pRoot, int expectedSum, vector<vector<int> > &paths, vector<int> &path, int &currentSum
    ) {
        currentSum += pRoot->val;
        path.push_back(pRoot->val);
        bool isLeaf = pRoot->left == nullptr && pRoot->right == nullptr;
        if (currentSum == expectedSum && isLeaf) {
            paths.push_back(path);
        }
        if (pRoot->left != nullptr)
            FindPath(pRoot->left, expectedSum, paths, path, currentSum);
        if (pRoot->right != nullptr)
            FindPath(pRoot->right, expectedSum, paths, path, currentSum);
        currentSum -= pRoot->val;
        path.pop_back();
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
