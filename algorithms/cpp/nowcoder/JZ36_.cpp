#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//两个链表的第一个公共结点
class Solution {
public:
    unsigned int GetListLength(ListNode *pHead) {
        unsigned int nLength = 0;
        ListNode *pNode = pHead;
        while (pNode != nullptr) {
            ++nLength;
            pNode = pNode->next;
        }
        return nLength;
    }

    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        // 得到两个链表的长度
        unsigned int nLength1 = GetListLength(pHead1);
        unsigned int nLength2 = GetListLength(pHead2);
        int nLengthDif = nLength1 - nLength2;

        ListNode *pListHeadLong = pHead1;
        ListNode *pListHeadShort = pHead2;
        if (nLength2 > nLength1) {
            pListHeadLong = pHead2;
            pListHeadShort = pHead1;
            nLengthDif = nLength2 - nLength1;
        }

        // 先在长链表上走几步，再同时在两个链表上遍历
        for (int i = 0; i < nLengthDif; ++i)
            pListHeadLong = pListHeadLong->next;

        while ((pListHeadLong != nullptr) &&
               (pListHeadShort != nullptr) &&
               (pListHeadLong != pListHeadShort)) {
            pListHeadLong = pListHeadLong->next;
            pListHeadShort = pListHeadShort->next;
        }

        // 得到第一个公共结点
        ListNode *pFisrtCommonNode = pListHeadLong;

        return pFisrtCommonNode;
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



