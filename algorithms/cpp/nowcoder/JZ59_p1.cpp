# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

// 按之字形顺序打印二叉树
//请实现一个函数按照之字形打印二叉树，即第一行按照从左到右的顺序打印，第二层按照从右至左的顺序打印，第三行按照从左到右的顺序打印，其他行以此类推。
/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    vector<vector<int> > Print(TreeNode *pRoot) {
        if (pRoot == nullptr) return {};
        queue<TreeNode *> q;
        q.push(pRoot);
        vector<vector<int>> all_result;
        bool flag = true;  //true时翻转，否则不翻转
        while (!q.empty()) {
            vector<int> result;
            int num = q.size();
            while (num--) {
                TreeNode *top = q.front();
                q.pop();
                result.push_back(top->val);
                if (top->left) q.push(top->left);
                if (top->right) q.push(top->right);
            }
            if (!flag)reverse(result.begin(), result.end());
            flag = !flag;
            all_result.push_back(result);
        }
        return all_result;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
