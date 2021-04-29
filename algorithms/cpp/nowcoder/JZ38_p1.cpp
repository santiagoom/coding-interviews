#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//二叉树的深度

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
    int TreeDepth(TreeNode *pRoot) {
        if (pRoot == nullptr)
            return 0;
//        if (pRoot->left == nullptr && pRoot->right == nullptr)
//            return 1;
        int left = TreeDepth(pRoot->left);
        int right = TreeDepth(pRoot->right);
        return left > right ? left + 1 : right + 1;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> nums{1, 2, 3, 4, 5, 6};
    delete so;
    return 0;
}