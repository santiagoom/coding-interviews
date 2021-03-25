# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

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
    vector<vector<int> > Print(TreeNode* pRoot) {
        if(pRoot == nullptr) return {};
        queue<TreeNode*> q;
        q.push(pRoot);
        vector<vector<int>> all_result;
        bool flag = true;  //true时翻转，否则不翻转
        while(!q.empty()){
            vector<int> result;
            int num = q.size();
            while(num --){
                TreeNode * top = q.front();
                q.pop();
                result.push_back(top->val);
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
            }
            if(!flag)reverse(result.begin(), result.end());
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
