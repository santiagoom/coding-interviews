#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//数组中出现次数超过一半的数字
// 面试题39：数组中出现次数超过一半的数字
// 题目：数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。例
// 如输入一个长度为9的数组{1, 2, 3, 2, 2, 2, 5, 4, 2}。由于数字2在数组中
// 出现了5次，超过数组长度的一半，因此输出2。

class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        if (numbers.empty())
            return 0;
        int number = numbers[0];
        int time = 1;
        for (int i = 1; i < numbers.size(); ++i) {
            if (time == 0) {
                number = numbers[i];
                time = 1;
            } else if (numbers[i] == number) {
                time++;
            } else {
                time--;
            }
        }

        time = 0;
        for (int i = 0; i < numbers.size(); ++i) {
            if (number == numbers[i])
                time++;
        }
        if (time * 2 > numbers.size())
            return number;
        return 0;
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
