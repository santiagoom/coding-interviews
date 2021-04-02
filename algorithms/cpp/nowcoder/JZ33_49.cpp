#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 面试题49：丑数
// 题目：我们把只包含因子2、3和5的数称作丑数（Ugly Number）。求按从小到
// 大的顺序的第1500个丑数。例如6、8都是丑数，但14不是，因为它包含因子7。
// 习惯上我们把1当做第一个丑数。
//if (tmp == tmp2)
//  i2++;
//if (tmp == tmp3)
//  i3++;
//if (tmp == tmp5)
//  i5++;
// 定位到下一个对应最小的
class Solution {
public:
/**
 *
 * @param index int整型
 * @return int整型
 */
    int GetUglyNumber_Solution(int index) {
        // write code here
        int arr[index];
        int i2 = 1, i3 = 1, i5 = 1;

        arr[0] = 0;
        arr[1] = 1;

        int tmp, tmp2, tmp3, tmp5;
        for (int i = 1; i < index; i++) {
            tmp2 = 2 * arr[i2];
            tmp3 = 3 * arr[i3];
            tmp5 = 5 * arr[i5];
            tmp = (tmp2 < tmp3) ? tmp2 : tmp3;
            tmp = (tmp < tmp5) ? tmp : tmp5;
            arr[i + 1] = tmp;
            if (tmp == tmp2)
                i2++;
            if (tmp == tmp3)
                i3++;
            if (tmp == tmp5)
                i5++;
        }
        return arr[index];
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