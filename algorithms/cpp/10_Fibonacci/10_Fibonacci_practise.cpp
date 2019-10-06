#include <iostream>
#include <vector>
#include <myutils.h>

using namespace std;


class Solution_re {
//    time exce...
public:
    int Fibonacci(int n) {
        if (n <= 0)
            return 0;
        if (n == 1)
            return 1;
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
};

class Solution {
public:
    int Fibonacci(int n) {
        int first = 0;
        int second = 1;
        int res = n;
        for (int i = 2; i <= n; i++) {
            res = first + second;
            first = second;
            second = res;
        }
        return res;
    }
};

class Solution_ {
public:
    int jumpFloorII(int number) {
        int res = 0;
        if (number == 0)
            return 1;

        for (int i = 1; i <= number; i++) {
            res += jumpFloorII(number - i);
        }
        return res;
    }
};

class Solution_opt {
public:
    int jumpFloorII(int number) {
        vector<int> dp(number + 1, 0);
        return helper(number, dp);
    }

private:
    int helper(int number, vector<int> &nums) {
        int res = 0;
        if (number == 0)
            return 1;
        if (0 != nums[number])
            return nums[number];

        for (int i = 1; i <= number; i++) {
            res += helper(number - i, nums);
            nums[number] = res;
        }
        return res;
    }
};

class Solution3 {
public:
    int rectCover(int number) {
        vector<int> dp(number + 1, 0);
        if (0 >= number)
            return 0;
        if (1 == number)
            return number;
        if (2 == number)
            return number;
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= number; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[number];
    }
};

int main() {
//    auto *so = new Solution_();
    auto *so = new Solution_opt();
//    auto *so = new Solution3();
    int n = 20;
    for (int i = 0; i < n; i++) {
        int res = so->jumpFloorII(i);
        print(res);
    }
    delete so;
    return 0;
}
