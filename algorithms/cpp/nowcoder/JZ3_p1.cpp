#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 面试题6：从尾到头打印链表
// 题目：输入一个链表的头结点，从尾到头反过来打印出每个结点的值。
//示例1
//输入
//{67,0,24,58}
//返回值
//[58,24,0,67]

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode *head) {
        if (head == nullptr) return {};
        vector<int> res;
        ListNode *cur = head;
        while (cur) {
            res.push_back(cur->val);
            cur = cur->next;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> nums{1, 2, 3, 4, 5, 6};
    //输入
    //{67,0,24,58}
    //返回值
    //[58,24,0,67]
    ListNode *head = new ListNode(67);
    head->next = new ListNode(0);
    head->next->next = new ListNode(24);
    head->next->next->next = new ListNode(58);
    vector<int> res = so->printListFromTailToHead(head);
    CppUtils::print_1d_vector(res);
    delete so;
    return 0;
}
