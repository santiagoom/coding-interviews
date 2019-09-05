#include <iostream>
#include <vector>

using namespace std;

class Solution {

};

struct BinaryTreeNode {
    int m_nValue;
    BinaryTreeNode *m_pLeft;
    BinaryTreeNode *m_pRight;
    BinaryTreeNode *m_pParent;
};

BinaryTreeNode *GetNext(BinaryTreeNode *pNode) {
    if (!pNode)
        return nullptr;

    BinaryTreeNode *next = nullptr;

    if (pNode->m_pRight) {
        BinaryTreeNode *right = pNode->m_pRight;
        while (right->m_pLeft) {
            right = right->m_pLeft;
        }
        next = right;
    } else if (pNode->m_pParent) {
        BinaryTreeNode *curr = pNode;
        BinaryTreeNode *par = pNode->m_pParent;
        while (par && curr == par->m_pRight) {
            curr = curr->m_pParent;
            par = par->m_pParent;
        }
        next = par;
    }
    return next;
}


int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
