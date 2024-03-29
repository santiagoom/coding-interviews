#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 剪绳子
// 面试题14：剪绳子
// 题目：给你一根长度为n绳子，请把绳子剪成m段（m、n都是整数，n>1并且m≥1）。
// 每段的绳子的长度记为k[0]、k[1]、……、k[m]。k[0]*k[1]*…*k[m]可能的最大乘
// 积是多少？例如当绳子的长度是8时，我们把它剪成长度分别为2、3、3的三段，此
// 时得到最大的乘积18。

class Solution {
public:
    int cutRope(int number) {
        vector<int> dp(number + 1, 0);

        for (int i = 1; i <= number; i++) {
            int max_val = 0;
            for (int j = 1; j <= i; j++) {
                max_val = max(max_val, (i - j) * j, dp[i - j] * j);
            }
            dp[i] = max_val;
        }
//        CppUtils::print_1d_vector(dp);
        return dp[number];
    }

private:
//    int max(int a, int b) { return a > b ? a : b; }

    int max(int a, int b, int c) { return (a > b ? a : b) > c ? (a > b ? a : b) : c; }
};


int main() {
    auto *so = new Solution();
    int number = 8;
    int res = so->cutRope(number);

    delete so;
    return 0;
}
