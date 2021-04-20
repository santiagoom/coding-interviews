#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//合并两个排序的链表
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode *Merge(ListNode *pHead1, ListNode *pHead2) {

        if (pHead1 == nullptr && pHead2 == nullptr)
            return nullptr;

        ListNode *dummy = new ListNode(0);
        ListNode *head = dummy;
        while (pHead1 != nullptr || pHead2 != nullptr) {
            if (pHead1 == nullptr) {
                head->next = pHead2;
                break;
            }
            if (pHead2 == nullptr) {
                head->next = pHead1;
                break;
            }
            if (pHead1->val <= pHead2->val) {
                head->next = pHead1;
                pHead1 = pHead1->next;
                head = head->next;
            } else {
                head->next = pHead2;
                pHead2 = pHead2->next;
                head = head->next;
            }
        }
        return dummy->next;
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
