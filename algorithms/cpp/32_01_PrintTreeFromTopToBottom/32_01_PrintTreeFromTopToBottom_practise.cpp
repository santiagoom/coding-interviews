#include <iostream>
#include <vector>
#include <myTreeNode.h>
#include <queue>
#include <myutils.h>

using namespace std;

class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode *root) {
        vector<int> res;
        if (!root)return {};
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode *curr = q.front();
            res.push_back(curr->val);
            q.pop();
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
        return res;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> nums{};
    delete so;
    return 0;
}
