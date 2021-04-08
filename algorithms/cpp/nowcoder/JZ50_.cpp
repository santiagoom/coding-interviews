#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 数组中重复的数字
// 面试题3（一）：找出数组中重复的数字
// 题目：在一个长度为n的数组里的所有数字都在0到n-1的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，
// 也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。例如，如果输入长度为7的数组{2, 3, 1, 0, 2, 5, 3}，
// 那么对应的输出是重复的数字2或者3。

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param numbers int整型vector
     * @return int整型
     */
    int duplicate(vector<int> &numbers) {
        // write code here
        for (int i = 0; i < numbers.size(); ++i) {

            while (numbers[i] != i) {
                if (numbers[i] == numbers[numbers[i]]) return numbers[i];
                else swap(numbers[i], numbers[numbers[i]]);
            }
        }
        return -1;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> nums{2, 3, 1, 0, 2, 5, 3};
    int res = so->duplicate(nums);
    CppUtils::print(res);
    delete so;
    return 0;
}
