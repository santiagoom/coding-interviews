#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;
//包含min函数的栈
// 面试题30：包含min函数的栈
// 题目：定义栈的数据结构，请在该类型中实现一个能够得到栈的最小元素的min
// 函数。在该栈中，调用min、push及pop的时间复杂度都是O(1)。


class Solution {
public:
    stack<int> s1;
    stack<int> s2;

    void push(int value) {
        s1.push(value);
        if (s2.empty() || s2.top() <= value)
            s2.push(value);
    }

    void pop() {
        if (s1.top() == s2.top())
            s2.pop();
        s1.pop();
    }

    int top() {
        return s1.top();
    }

    int min() {
        return s2.top();
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