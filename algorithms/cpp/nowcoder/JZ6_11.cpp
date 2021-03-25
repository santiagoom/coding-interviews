#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;
// 面试题11：旋转数组的最小数字
// 题目：把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
// 输入一个递增排序的数组的一个旋转，输出旋转数组的最小元素。例如数组
// {3, 4, 5, 1, 2}为{1, 2, 3, 4, 5}的一个旋转，该数组的最小值为1。

class Solution {
public:
    int minNumberInRotateArray(vector<int> &rotateArray) {
        int res = 0;
        if (rotateArray.empty())
            return res;

        int start = 0;
        int end = rotateArray.size() - 1;
        int mid = start;
        while (rotateArray[start] >= rotateArray[end]) {
            if (end - start == 1)
                return rotateArray[end];
            mid = (start + end) / 2;
            if (rotateArray[start] == rotateArray[end] && rotateArray[start] == rotateArray[mid])
                return minNumInSequence(rotateArray, start, end);
            if (rotateArray[mid] >= rotateArray[start])
                start = mid;
            else if (rotateArray[mid] <= rotateArray[end])
                end = mid;
        }
        return rotateArray[mid];
    }

private:

    int minNumInSequence(vector<int> &rotateArray, int start, int end) {
        int ans = rotateArray[start];
        for (int i = start + 1; i <= end; i++) {
            if (rotateArray[i] < ans)
                ans = rotateArray[i];
        }
        return ans;
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