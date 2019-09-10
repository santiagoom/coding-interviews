#include <iostream>
#include <vector>
#include <myutils.h>
#include <myListNode.h>

using namespace std;


class Solution {
public:
    ListNode *Merge(ListNode *pHead1, ListNode *pHead2) {
        ListNode *dummy = new ListNode(0);
        ListNode *head = dummy;

        if (pHead1 == nullptr && pHead2 == nullptr)
            return nullptr;

        while (pHead1 != nullptr || pHead2 != nullptr) {
            if (pHead1 == nullptr) {
                head->next = pHead2;
                break;
            }
            if (pHead2 == nullptr) {
                head->next = pHead1;
                break;
            }

            if (pHead1->val > pHead2->val) {
                head->next = pHead2;
                pHead2 = pHead2->next;
                head = head->next;
            } else {
                head->next = pHead1;
                pHead1 = pHead1->next;
                head = head->next;
            }
        }
        return dummy->next;
    }
};


int main() {
    auto *so = new Solution();
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);
    ListNode *l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);
    ListNode *res = so->Merge(l1, l2);
    printList(res);
    return 0;
}
