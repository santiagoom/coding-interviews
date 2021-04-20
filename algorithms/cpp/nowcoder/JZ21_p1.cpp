#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 面试题31：栈的压入、弹出序列
// 题目：输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是
// 否为该栈的弹出顺序。假设压入栈的所有数字均不相等。例如序列1、2、3、4、
// 5是某栈的压栈序列，序列4、5、3、2、1是该压栈序列对应的一个弹出序列，但
// 4、3、5、1、2就不可能是该压栈序列的弹出序列。
// 借助栈实现

class Solution {
public:
    bool IsPopOrder(vector<int> pushV, vector<int> popV) {
        if (pushV.size() != popV.size()) return false;
        int size = pushV.size();
        stack<int> stack;
        int i = 0;
        for (int x :pushV) {
            stack.push(x);
            while (!stack.empty() && stack.top() == popV[i]) {
                stack.pop();
                i++;
            }
        }
        return i == size;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> pushV{1, 2, 3, 4, 5,};
    vector<int> popV{4, 5, 3, 2, 1};
    bool res = so->IsPopOrder(pushV, popV);
    CppUtils::print(res);
    delete so;
    return 0;
}
