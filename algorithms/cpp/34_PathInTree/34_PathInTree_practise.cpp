#include <iostream>
#include <vector>
#include <myTreeNode.h>
#include <myutils.h>
#include <Tree.h>

using namespace std;


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
    vector<int> nums{};
    delete so;
    return 0;
}
