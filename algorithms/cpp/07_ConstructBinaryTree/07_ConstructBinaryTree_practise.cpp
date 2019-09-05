#include <iostream>
#include <vector>
#include <cstdio>

#include <iostream>
//#include <myTreeNode.h>

//#include "myTreeNode.h"
#include "../utils/myTreeNode.h"


#include <exception>
#include <cstdio>

#include <iostream>

using namespace std;

using namespace std;


class Solution {
public:
    TreeNode *reConstructBinaryTree(vector<int> &pre, vector<int> &vin) {
        if (pre.empty() || pre.size() != vin.size())
            return nullptr;

        int length = pre.size();
        constructHelper(pre, 0, length - 1, vin, 0, length - 1);
        return nullptr;
    }

private:
    TreeNode *constructHelper(vector<int> &pre, int startPre, int endPre, vector<int> &vin, int startVin, int endVin) {
        int rootValue = pre[startPre];
        TreeNode *root = new TreeNode(rootValue);

        if (pre[startPre] == pre[endPre]) {
            if (vin[startVin] == vin[endVin] && pre[startPre] == vin[startVin])
                return root;
            else
                throw invalid_argument("invalid_argument");
        }

        int rootPos = startVin;
        while (startVin <= endVin && rootValue != vin[rootPos])
            rootPos++;
        if (rootPos == endVin && rootValue != vin[rootPos])
            throw invalid_argument("invalid_argument");

        int leftLength = rootPos - startVin;
        int leftPreEnd = startPre + leftLength;

        if (0 < leftLength)
            root->left = constructHelper(pre, startPre + 1, leftPreEnd, vin, startVin, rootPos - 1);
        if (leftLength < endPre - startPre)
            root->right = constructHelper(pre, leftPreEnd + 1, endPre, vin, rootPos + 1, endVin);

        return root;
    }
};

int main() {
    auto *so = new Solution();
    int length = 8;

    vector<int> pre{1, 2, 4, 7, 3, 5, 6, 8};
    vector<int> vin{4, 7, 2, 1, 5, 3, 8, 6};

    auto res = so->reConstructBinaryTree(pre, vin);
    inorderTraversal(res);
    cout << "new file!" << endl;
    delete so;
    return 0;
}
