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


//int main() {
////    2019-09-23 20:13:46
//    auto *so = new Solution();
//    int n;
//    cin>>n;
//
//    vector<int> treeNodes{1, 2, 3, 4, 5, 6, 7, 8, 9};
//    cout << "new file!" << endl;
//    delete so;
//    return 0;
//}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char ip_str[] = "192.168.1.250";
    char *ip_arr[4];
    char *s = strtok(ip_str, ".");
    int i = 0;
    while (s) {
//        ip_arr[i] = s;
        printf("%s\n", s);
        s = strtok(NULL, ".");
//        i++;
    }

//    for (i = 0; i < 4; i++)
//        printf("%s\n", ip_arr[i]);
}