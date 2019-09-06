#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        if (stack2.empty())
            throw exception();
        int data = stack2.top();
        stack2.pop();
        return data;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};

int main() {
//    2019-09-05 17:31:29
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
