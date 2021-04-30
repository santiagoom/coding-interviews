#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//和为S的两个数字
//输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的。

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array, int sum) {
        vector<int> res;
        int i = 0;
        int j = array.size() - 1;
        while (i < j) {
            if (array[i] + array[j] == sum) {
                res.push_back(array[i]);
                res.push_back(array[j]);
                break;
            } else if (array[i] + array[j] < sum) {
                i++;
            } else {
                j--;
            }
        }
        return res;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> nums{1, 2, 4, 7, 11, 15};
    int sum = 15;
    vector<int> res = so->FindNumbersWithSum(nums, sum);
    CppUtils::print_1d_vector(res);
    delete so;
    return 0;
}