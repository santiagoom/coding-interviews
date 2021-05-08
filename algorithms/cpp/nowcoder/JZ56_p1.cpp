# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

// 删除链表中重复的结点
// 面试题18（二）：删除链表中重复的结点
// 题目：在一个排序的链表中，如何删除重复的结点？例如，在图3.4（a）中重复
// 结点被删除之后，链表如图3.4（b）所示。

// 在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。
// 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5
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
        if (pHead == nullptr || pHead->next == nullptr) return nullptr;
        ListNode *dummy = new ListNode(0);
        dummy->next = pHead;
        ListNode *prev = dummy;
        ListNode *curr = nullptr;
        ListNode *temp = nullptr;

        while (prev->next != nullptr) {
            curr = prev->next;
            if (curr->next != nullptr && curr->val == curr->next->val) {
                int target = curr->val;
                while (curr != nullptr && curr->val == target) {
                    temp = curr;
                    curr = curr->next;
                    delete temp;
                }
                prev->next = curr;
            } else {
                prev = prev->next;
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

