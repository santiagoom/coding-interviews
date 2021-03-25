# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
    bool IsBalanced_Solution(TreeNode *pRoot) {
        if (pRoot == nullptr)
            return true;
        int left = TreeDepth(pRoot->left);
        int right = TreeDepth(pRoot->right);
        int diff = left - right;
        if (diff > 1 || diff < -1)
            return false;
        return IsBalanced_Solution(pRoot->left)
               && IsBalanced_Solution(pRoot->right);
    }

    int TreeDepth(const TreeNode *pRoot) {
        if (pRoot == nullptr)
            return 0;

        int nLeft = TreeDepth(pRoot->left);
        int nRight = TreeDepth(pRoot->right);

        return (nLeft > nRight) ? (nLeft + 1) : (nRight + 1);
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
