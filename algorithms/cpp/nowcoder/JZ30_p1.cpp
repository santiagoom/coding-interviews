#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//连续子数组的最大和
// 面试题42：连续子数组的最大和
// 题目：输入一个整型数组，数组里有正数也有负数。数组中一个或连续的多个整
// 数组成一个子数组。求所有子数组的和的最大值。要求时间复杂度为O(n)。

class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        if (array.empty()) return 0;

        int max = array[0];
        int curr = array[0];
        for (int i = 1; i < array.size(); ++i) {
            if (curr < 0)
                curr = array[i];
            else {
                curr += array[i];
            }
            if (curr > max) {
                max = curr;
            }
        }
        return max;
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
