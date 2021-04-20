#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//从上往下打印二叉树
//从上往下打印出二叉树的每个节点，同层节点从左至右打印。

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode *root) {
        if (root == nullptr) return {};
        vector<int> res;
        queue<TreeNode *> queue;
        queue.push(root);

        while (!queue.empty()) {
            TreeNode *curr = queue.front();
            res.push_back(curr->val);
            queue.pop();

            if (curr->left)
                queue.push(curr->left);
            if (curr->right)
                queue.push(curr->right);
        }
        return res;
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
