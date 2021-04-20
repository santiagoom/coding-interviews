#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;
//反转链表
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
    ListNode *ReverseList(ListNode *pHead) {
        ListNode *curr = pHead;
        ListNode *prev = nullptr, *next = nullptr;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
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