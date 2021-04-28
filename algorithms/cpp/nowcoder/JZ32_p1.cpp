#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 面试题45：把数组排成最小的数
// 题目：输入一个正整数数组，把数组里所有数字拼接起来排成一个数，打印能拼
// 接出的所有数字中最小的一个。例如输入数组{3, 32, 321}，则打印出这3个数
// 字能排成的最小数字321323。

class Solution {
public:
    string PrintMinNumber(vector<int> numbers) {
        string str;
        if (numbers.size() <= 0) return str;

        sort(numbers.begin(), numbers.end(), cmp);
        for (int i = 0; i < numbers.size(); ++i) {
            str += to_string(numbers[i]);
        }
        return str;
    }

    static bool cmp(int a, int b) {
        string aa = to_string(a) + to_string(b);
        string bb = to_string(b) + to_string(a);
        return aa < bb;
    }

};

int main() {
    auto *so = new Solution();
    vector<int> nums{3, 32, 321};
    string res = so->PrintMinNumber(nums);
    CppUtils::print(res);

//    int a = 3;
//    int b = 32;
//    bool cmp = so->cmp(a, b);
//    CppUtils::print(cmp);
    delete so;
    return 0;
}
