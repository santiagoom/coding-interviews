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
        long long ans = 0;
        int index;
        int sign = 1;
        int tmp;
        if (str[0] == '+') { index = 1; }
        else if (str[0] == '-') {
            index = 1;
            sign = -1;
        } else index = 0;
        for (; index < str.length(); ++index) {
            if (str[index] >= '0' && str[index] <= '9') {
                tmp = str[index] - '0';
                ans = ans * 10 + tmp;
                // if(sign==1 && ans>INT_MAX) return 0;
                //if(sign==-1 && ans < INT_MIN) return 0;
            } else return 0;
        }
        return sign * ans;
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

