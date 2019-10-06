#include <iostream>
#include <vector>
#include <stack>
#include <myutils.h>

using namespace std;


class Solution {
public:
    stack<int> stk, minstk;

    void push(int number) {
        stk.push(number);
        if (minstk.empty() or number <= minstk.top()) {
            minstk.push(number);
        }
    }

    int pop() {
        int top = stk.top();
        stk.pop();
        if (top == minstk.top()) {
            minstk.pop();
        }
        return top;
    }

    int top() {
        return stk.top();
    }

    int min() {
        return minstk.top();
    }
};

int main() {
    auto *so = new Solution();
    vector<int> nums{};
    delete so;
    return 0;
}
