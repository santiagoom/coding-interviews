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
    int GetUglyNumber_Solution(int index) {
        if (index < 1) return 0;
        vector<int> array(index, 0);
        array[0] = 0;
        array[1] = 1;
        int i2 = 1, i3 = 1, i5 = 1;
        int tmp, tmp2, tmp3, tmp5;
        for (int i = 1; i < index; ++i) {
            tmp2 = 2 * array[i2];
            tmp3 = 3 * array[i3];
            tmp5 = 5 * array[i5];
            tmp = tmp2 < tmp3 ? tmp2 : tmp3;
            tmp = tmp < tmp5 ? tmp : tmp5;
            array[i + 1] = tmp;
            if (tmp == tmp2)
                i2++;
            if (tmp == tmp3)
                i3++;
            if (tmp == tmp5)
                i5++;
        }
        return array[index];
    }
};

class Solution1 {
public:
    int GetUglyNumber_Solution(int index) {
        if (index < 1) return 0;
        vector<int> array(index, 0);
        array[0] = 1;
        int i2 = 0, i3 = 0, i5 = 0;
        int tmp, tmp2, tmp3, tmp5;
        for (int i = 1; i < index; ++i) {
            tmp2 = 2 * array[i2];
            tmp3 = 3 * array[i3];
            tmp5 = 5 * array[i5];
            tmp = tmp2 < tmp3 ? tmp2 : tmp3;
            tmp = tmp < tmp5 ? tmp : tmp5;
            array[i] = tmp;
            if (tmp == tmp2)
                i2++;
            if (tmp == tmp3)
                i3++;
            if (tmp == tmp5)
                i5++;
        }
        return array[index - 1];
    }
};

int main() {
    auto *so = new Solution1();
    int index = 1500;
    int res = so->GetUglyNumber_Solution(index);
    CppUtils::print(res);
    delete so;
    return 0;
}