#include <iostream>
#include <vector>
#include <myutils.h>
#include <myListNode.h>

using namespace std;

class Solution {
public:
    ListNode *FindKthToTail(ListNode *pListHead, unsigned int k) {
        ListNode *dummy = new ListNode(0);
        dummy->next = pListHead;
        ListNode *first = dummy;
        ListNode *second = dummy;
        int i = 0;
        while (first->next && i++ < k) {
            first = first->next;
        }
        while (first->next) {
            first = first->next;
            second = second->next;
            i++;
        }
        if (k > i)
            return nullptr;
        else {
            return second->next;
        }
    }
};


int main() {
    auto *so = new Solution();
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(3);
    l1->next->next->next = new ListNode(4);
    l1->next->next->next->next = new ListNode(5);
    printList(l1);

    ListNode *res = so->FindKthToTail(l1, 6);
    if (res->next)
        print(res->val);
    delete res;
    delete so;
    return 0;
}