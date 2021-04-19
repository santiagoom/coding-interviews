#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 面试题10：斐波那契数列
// 题目：写一个函数，输入n，求斐波那契（Fibonacci）数列的第n项。
//大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项（从0开始，第0项为0，第1项是1）。
//n\leq 39n≤39
//intput 4 output 3

class Solution {
public:
    int Fibonacci(int n) {
        int first = 0;
        int second = 1;
        int res = n;
        for (int i = 2; i <= n; ++i) {
            res = first + second;
            first = second;
            second = res;
        }
        return res;
    }
};

int main() {
    auto *so = new Solution();
    int n = 4;
    int res = so->Fibonacci(n);
    CppUtils::print(res);
    delete so;
    return 0;
}
