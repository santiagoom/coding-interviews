#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//数值的整数次方
// 面试题16：数值的整数次方
// 题目：实现函数double Power(double base, int exponent)，求base的exponent
// 次方。不得使用库函数，同时不需要考虑大数问题。
class Solution {
public:
    double Power(double base, int exponent) {
        if (exponent < 0) {
            base = 1 / base;
            exponent = -exponent;
        }
        return powUtils(base, exponent);
    }

private:
    double powUtils(double base, int exponent) {
        if (exponent == 0)
            return 1;
        return exponent % 2 == 0 ? powUtils(base * base, exponent / 2) : base * powUtils(base * base, exponent / 2);
    }
};

int main() {
    auto *so = new Solution();
    double x = 2.0;
    int n = -2;
    double res = so->Power(x, n);
    CppUtils::print(res);
    delete so;
    return 0;
}