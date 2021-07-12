#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//二叉搜索树的后序遍历序列
// 面试题33：二叉搜索树的后序遍历序列
// 题目：输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。
// 如果是则返回true，否则返回false。假设输入的数组的任意两个数字都互不相同。


// 利用index去定位，免得利用长度得加start index

class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if (sequence.empty()) return false;
        int size = sequence.size();
        return helper(sequence, 0, size - 1);
    }

    bool helper(vector<int> sequence, int start, int end) {
        int root = sequence[end];
        int i = start;
        for (; i < end; ++i) {
            if (sequence[i] > root)
                break;
        }
        int j = i;
        for (; j < end; ++j) {
            if (sequence[j] < root)
                return false;
        }

        bool left = true;
        if (i > start)
            left = helper(sequence, start, i - 1);
        bool right = true;
        if (i < end)
            right = helper(sequence, i, end - 1);
        return left and right;
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
