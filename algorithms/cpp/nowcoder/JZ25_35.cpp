#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//复杂链表的复制
// 面试题35：复杂链表的复制
// 题目：请实现函数ComplexListNode* Clone(ComplexListNode* pHead)，复
// 制一个复杂链表。在复杂链表中，每个结点除了有一个m_pNext指针指向下一个
// 结点外，还有一个m_pSibling 指向链表中的任意结点或者nullptr。
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;

    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};

class Solution {
public:
    RandomListNode *Clone(RandomListNode *pHead) {
        CloneNodes(pHead);
        ConnectSiblingNodes(pHead);
        return ReconnectNodes(pHead);
    }

private:
    void CloneNodes(RandomListNode *pHead) {
        RandomListNode *pNode = pHead;
        while (pNode != nullptr) {
            RandomListNode *pCloned = new RandomListNode(0);
            pCloned->label = pNode->label;
            pCloned->next = pNode->next;
            pCloned->random = nullptr;

            pNode->next = pCloned;
            pNode = pCloned->next;
        }
    }

    void ConnectSiblingNodes(RandomListNode *pHead) {
        RandomListNode *pNode = pHead;
        while (pNode != nullptr) {
            RandomListNode *pCloned = pNode->next;
            if (pNode->random != nullptr) {
                pCloned->random = pNode->random->next;
            }

            pNode = pCloned->next;
        }
    }

    RandomListNode *ReconnectNodes(RandomListNode *pHead) {
        RandomListNode *pNode = pHead;
        RandomListNode *pClonedHead = nullptr;
        RandomListNode *pClonedNode = nullptr;

        if (pNode != nullptr) {
            pClonedHead = pClonedNode = pNode->next;
            pNode->next = pClonedNode->next;
            pNode = pNode->next;
        }

        while (pNode != nullptr) {
            pClonedNode->next = pNode->next;
            pClonedNode = pClonedNode->next;

            pNode->next = pClonedNode->next;
            pNode = pNode->next;
        }

        return pClonedHead;
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
