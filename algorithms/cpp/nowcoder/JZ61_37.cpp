# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

// 序列化二叉树

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
    char *Serialize(TreeNode *root) {
        string str = SerializeHelper(root);
        char *res = new char[str.length() + 1];
        strcpy(res, str.c_str());
        return res;
    }

    TreeNode *Deserialize(char *str) {
        int pos = 0;
        return DeserializeHelper(str, pos);
    }

    string SerializeHelper(TreeNode *root) {
        if (!root) return "#";
        return to_string(root->val) + "!"
               + SerializeHelper(root->left)
               + SerializeHelper(root->right);
    }

    TreeNode *DeserializeHelper(char *str, int &pos) {
        if (str[pos] == '#' || str[pos] == '\0') {
            ++pos;
            return nullptr;
        }
        int num = 0;
        while (str[pos] != '!') {
            num = num * 10 + (str[pos] - '0');
            ++pos;
        }
        ++pos;
        TreeNode *root = new TreeNode(num);
        root->left = DeserializeHelper(str, pos);
        root->right = DeserializeHelper(str, pos);
        return root;
    }
};

int main() {
    auto *so = new Solution();
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    char *res = so->Serialize(root);
    CppUtils::print(res);
    TreeNode *out = so->Deserialize(res);
    CppUtils::preorderTraversal(out);
    delete so;
    return 0;
}
