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
        bool isNegative = false;
        if (exponent < 0) {
            isNegative = true;
            base = 1 / base;
            exponent = -exponent;
        }
        double ans = powUtils(base, exponent);
        return ans;
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
