#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;
//链表中倒数第k个结点
// walk k-1 step, 1~k-1
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 *	ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 *	ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param pHead ListNode类
     * @param k int整型
     * @return ListNode类
     */
    ListNode *FindKthToTail(ListNode *pHead, int k) {
        // write code here
        if (pHead == nullptr || k == 0)
            return nullptr;
        ListNode *fast = pHead;
        ListNode *slow = nullptr;
        for (int i = 0; i < k - 1; ++i) {
            if (pHead->next != nullptr)
                fast = fast->next;
            else {
                return nullptr;
            }
        }
        slow = pHead;
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
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
