#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;
//一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。

class Solution {
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

int main() {
    auto *so = new Solution();
    int number = 3;
    int res = so->jumpFloorII(number);
    CppUtils::print(res);
    delete so;
    return 0;
}
