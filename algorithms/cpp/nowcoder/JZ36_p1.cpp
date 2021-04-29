#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//两个链表的第一个公共结点

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
    ListNode *FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2) {
        if (pHead1 == nullptr || pHead2 == nullptr) return nullptr;

        int length1 = GetListLength(pHead1);
        int length2 = GetListLength(pHead2);

        ListNode *fast, *slow;
        int diff = 0;
        if (length1 > length2) {
            fast = pHead1;
            slow = pHead2;
            diff = length1 - length2;
        } else {
            fast = pHead2;
            slow = pHead1;
            diff = length2 - length1;
        }

        for (int i = 0; i < diff; ++i) {
            fast = fast->next;
        }
        while (fast != nullptr && slow != nullptr) {
            if (fast == slow)
                return fast;
            fast = fast->next;
            slow = slow->next;
        }
        return nullptr;
    }

    int GetListLength(ListNode *pHead) {
        if (pHead == nullptr) return -1;
        int length = 0;
        while (pHead != nullptr) {
            length++;
            pHead = pHead->next;
        }
        return length;
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



