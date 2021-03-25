# include<iostream>
# include<vector>
# include<cppUtils.h>

using namespace std;


//struct ListNode {
//    int val;
//    struct ListNode *next;
//
//    ListNode(int x) : val(x), next(nullptr) {}
//};

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

        ListNode *pAhead = pHead;
        ListNode *pBehind = nullptr;

        for (unsigned int i = 0; i < k - 1; ++i) {
            if (pAhead->next != nullptr)
                pAhead = pAhead->next;
            else {
                return nullptr;
            }
        }
        pBehind = pHead;
        while (pAhead->next != nullptr) {
            pAhead = pAhead->next;
            pBehind = pBehind->next;
        }
        return pBehind;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
