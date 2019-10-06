#include <iostream>
#include <vector>
#include <myTreeNode.h>
#include <myutils.h>

using namespace std;

class Solution {
public:
    void Mirror(TreeNode *pNode) {
        if ((pNode == nullptr))
            return;
        TreeNode *pTemp = pNode->left;
        pNode->left = pNode->right;
        pNode->right = pTemp;
        if (pNode->left)
            Mirror(pNode->left);
        if (pNode->right)
            Mirror(pNode->right);
    }
};

int main() {
    auto *so = new Solution();
    vector<int> nums{};
    delete so;
    return 0;
}
