#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//整数中1出现的次数
// 面试题43：从1到n整数中1出现的次数
// 题目：输入一个整数n，求从1到n这n个整数的十进制表示中1出现的次数。例如
// 输入12，从1到12这些整数中包含1 的数字有1，10，11和12，1一共出现了5次。

class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n) {
        int res = 0;
        for (int i = 1; i <= n; ++i) {
            res += NumberOf1(i);
        }
        return res;
    }

    int NumberOf1(int n) {
        int count = 0;
        while (n > 0) {
            if (n % 10 == 1) {
                count++;
            }
            n = n / 10;
        }
        return count;
    }
};


int main() {
    auto *so = new Solution();
    int num = 13;
    int res = so->NumberOf1Between1AndN_Solution(num);
    CppUtils::print(res);
    delete so;
    return 0;
}
