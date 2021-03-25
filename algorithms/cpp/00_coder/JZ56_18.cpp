# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;
// 面试题18（二）：删除链表中重复的结点
// 题目：在一个排序的链表中，如何删除重复的结点？例如，在图3.4（a）中重复
// 结点被删除之后，链表如图3.4（b）所示。
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode *deleteDuplication(ListNode *pHead) {
        if (pHead == nullptr || pHead->next == nullptr) {
            return pHead;
        }

        ListNode *dummy = new ListNode(-1);
        dummy->next = pHead;
        ListNode *pre = dummy;
        ListNode *cur = nullptr;
        ListNode *temp = nullptr;

        while (pre->next != nullptr) {
            cur = pre->next;
            if (cur->next != nullptr && cur->next->val == cur->val) {
                int target = cur->val;
                while (cur != nullptr && cur->val == target) {
                    temp = cur;
                    cur = cur->next;
                    delete temp;
                }
                pre->next = cur;
            } else {
                pre = pre->next;
            }
        }

        return dummy->next;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
