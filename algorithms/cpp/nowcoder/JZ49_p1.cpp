#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//把字符串转换成整数
// 面试题67：把字符串转换成整数
// 题目：请你写一个函数StrToInt，实现把字符串转换成整数这个功能。当然，不
// 能使用atoi或者其他类似的库函数。
//输入
//"+2147483647"
//返回值
//2147483647

class Solution {
public:
    int StrToInt(string str) {
        if (str.size() == 0) return 0;
        int sign = 1;
        int index = 0;
        int ans = 0;
        int tmp = 0;

        if (str[0] == '+') {
            sign = 1;
            index = 1;
        } else if (str[0] == '-') {
            sign = -1;
            index = 1;
        } else {
            sign = 1;
            index = 0;
        }

        for (int i = index; i < str.size(); ++i) {
            if (str[i] - '0' <= 9 && str[i] - '0' >= 0) {
                tmp = str[i] - '0';
                ans = 10 * ans + tmp;
//                CppUtils::print(ans);
            } else return 0;
        }
        return ans * sign;
    }
};

int main() {
    auto *so = new Solution();
    string str = "+2147483647";
    int res = so->StrToInt(str);
    CppUtils::print(res);
    delete so;
    return 0;
}

