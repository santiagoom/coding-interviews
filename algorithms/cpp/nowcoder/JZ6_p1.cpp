#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;
// 面试题11：旋转数组的最小数字
// 题目：把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
// 输入一个递增排序的数组的一个旋转，输出旋转数组的最小元素。例如数组
// {3, 4, 5, 1, 2}为{1, 2, 3, 4, 5}的一个旋转，该数组的最小值为1。

//else if (rotateArray[mid] <= rotateArray[end])
//else if (rotateArray[mid] <= rotateArray[start])
//以上两个条件都符合

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int start = 0;
        int end = rotateArray.size() - 1;
        int mid = start;
        while (rotateArray[start] >= rotateArray[end]) {
            if (end - start == 1)
                return rotateArray[end];
            mid = (start + end) / 2;
            if (rotateArray[mid] < rotateArray[end])
                end = mid;
            else {
                start = mid;
            }
        }
        return rotateArray[mid];
    }
};


int main() {
    auto *so = new Solution();
    vector<int> nums{3, 4, 5, 0, 1, 2};
    int res = so->minNumberInRotateArray(nums);
    CppUtils::print(res);
    delete so;
    return 0;
}