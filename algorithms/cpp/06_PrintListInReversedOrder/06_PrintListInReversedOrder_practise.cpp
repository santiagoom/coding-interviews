#include <iostream>
#include <vector>
#include <stack>
#include <myListNode.h>


using namespace std;


class Solution {
public:
    vector<int> printListFromTailToHead(ListNode *head) {
        ListNode *curr = head;
        stack<int> s;
        vector<int> res;
        while (curr) {
            s.push(curr->val);
            curr = curr->next;
        }
        while (!s.empty()) {
            res.push_back(s.top());
            s.pop();
        }
        return res;
    }
};

int main() {
//    2019-09-05 09:50:26
//2019-09-05 09:55:55
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
