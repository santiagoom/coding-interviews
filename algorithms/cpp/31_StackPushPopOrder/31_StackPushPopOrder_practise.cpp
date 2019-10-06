#include <iostream>
#include <vector>
#include <stack>
#include <myutils.h>

using namespace std;


class Solution {
public:
    bool IsPopOrder(vector<int> pushV, vector<int> popV) {
        int N = pushV.size();
        stack<int> stack;

        int j = 0;
        for (int x: pushV) {
            stack.push(x);
            while (!stack.empty() && j < N && stack.top() == popV[j]) {
                stack.pop();
                j++;
            }
        }
        return j == N;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> nums{};
    delete so;
    return 0;
}
