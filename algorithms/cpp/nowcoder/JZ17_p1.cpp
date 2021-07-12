#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//树的子结构
// 面试题26：树的子结构
// 题目：输入两棵二叉树A和B，判断B是不是A的子结构。

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/


//if (pRoot1 == nullptr || pRoot1->val != pRoot2->val)
//return false;
//not
//if (pRoot1 == nullptr )
//return false;



class Solution {
public:
    bool HasSubtree(TreeNode *pRoot1, TreeNode *pRoot2) {
        bool result = false;
        if (pRoot1 != nullptr && pRoot2 != nullptr) {
            if (pRoot1->val == pRoot2->val)
                result = DoesTree1HaveTree2(pRoot1, pRoot2);
            if (!result)
                result = HasSubtree(pRoot1->left, pRoot2);
            if (!result)
                result = HasSubtree(pRoot1->right, pRoot2);
        }
        return result;
    }

    bool DoesTree1HaveTree2(TreeNode *pRoot1, TreeNode *pRoot2) {
        if (pRoot2 == nullptr)
            return true;
        if (pRoot1 == nullptr || pRoot1->val != pRoot2->val)
            return false;
        return DoesTree1HaveTree2(pRoot1->left, pRoot2->left) &&
               DoesTree1HaveTree2(pRoot1->right, pRoot2->right);
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

