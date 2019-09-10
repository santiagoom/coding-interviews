#include <iostream>
#include <vector>
#include <myutils.h>
#include <myListNode.h>

using namespace std;


class Solution {
public:
    ListNode *ReverseList(ListNode *pHead) {
        if (!pHead)
            return nullptr;
        return reverseListUtils(pHead, nullptr);
    }

private:
    ListNode *reverseListUtils(ListNode *curr, ListNode *prev) {
        if (nullptr == curr->next) {
            curr->next = prev;
            return curr;
        }
        ListNode *next = curr->next;
        curr->next = prev;
        return reverseListUtils(next, curr);
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

    ListNode *res = so->ReverseList(l1);
    printList(res);
    delete res;
    delete so;
    return 0;
}