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

    BinaryTreeNode *curr = pNode;
    BinaryTreeNode *par = curr->m_pParent;

    if (curr->m_pRight) {
        if (!curr->m_pRight->m_pLeft) {
            return curr->m_pRight;
        } else {
            curr = curr->m_pRight;
            while (curr) {
                if (!curr->m_pLeft)
                    return curr->m_pLeft;
                curr = curr->m_pLeft;
            }
            return curr;
        }
    }

    if (par && curr == par->m_pLeft)
        return par;

    while (par && curr == par->m_pRight) {
        if (par->m_pParent && par == par->m_pParent->m_pLeft)
            return par->m_pParent;
        curr = curr->m_pParent;
        par = par->m_pParent;
    }
    return nullptr;
}


int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
