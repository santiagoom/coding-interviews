#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;
//矩形覆盖
class Solution {
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