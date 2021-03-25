# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

static struct TreeNode *node = NULL;

class Solution {
public:
/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */

/**
 *
 * @param pRoot TreeNode类
 * @param k int整型
 * @return TreeNode类
 */
//    static struct TreeNode *node = NULL;

    void find_k(struct TreeNode *root, int k, int *count) {
        if (!root) return;
        find_k(root->left, k, count);
        (*count)++;
        if (k == (*count)) {
            node = root;
            return;
        }
        find_k(root->right, k, count);
    }

    struct TreeNode *KthNode(struct TreeNode *pRoot, int k) {
        int count = 0;
        node = NULL;
        find_k(pRoot, k, &count);
        return node;
    }

};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
