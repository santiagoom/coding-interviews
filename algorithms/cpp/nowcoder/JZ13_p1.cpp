#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 调整数组顺序使奇数位于偶数前面
// 面试题21：调整数组顺序使奇数位于偶数前面
// 题目：输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有
// 奇数位于数组的前半部分，所有偶数位于数组的后半部分。
// 输入一个整数数组，实现一个函数来调整该数组中数字的顺序，
// 使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。
// 对比插入排序

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param array int整型vector
     * @return int整型vector
     */
    vector<int> reOrderArray(vector<int> &array) {
        // write code here
        for (int i = 0; i < array.size(); ++i) {
            if (array[i] % 2 == 0)
                continue;
            else {
                int j = i;
                while (j > 0 && array[j - 1] % 2 == 0) {
                    swap(array[j], array[j - 1]);
                    j--;
                }
            }
        }
        return array;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> nums{1, 2, 5, 8, 7, 3, 4};
    vector<int> res = so->reOrderArray(nums);
    CppUtils::print_1d_vector(res);
    delete so;
    return 0;
}
