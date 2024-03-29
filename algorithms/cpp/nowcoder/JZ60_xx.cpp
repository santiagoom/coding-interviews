# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

// 把二叉树打印成多行
//题目描述
//        从上到下按层打印二叉树，同一层结点从左至右输出。每一层输出一行。
//示例1
//        输入
//{8,6,10,5,7,9,11}
//返回值
//[[8],[6,10],[5,7,9,11]]
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
    vector<vector<int>> res;

    vector<vector<int> > Print(TreeNode *pRoot) {
        if (NULL == pRoot) {
            return res;
        }
        queue<TreeNode *> q;
        q.push(pRoot);
        while (!q.empty()) {
            int sz = q.size();
            vector<int> tmp;
            for (int i = 0; i < sz; i++) {
                TreeNode *t = q.front();
                tmp.push_back(t->val);
                q.pop();
                if (i == sz - 1) {
                    res.push_back(tmp);
                }
                if (t->left) {
                    q.push(t->left);
                }
                if (t->right) {
                    q.push(t->right);
                }
            }
        }
        return res;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                