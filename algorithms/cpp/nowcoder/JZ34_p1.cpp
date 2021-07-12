#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//第一个只出现一次的字符位置
//在一个字符串(0<=字符串长度<=10000，全部由字母组成)中找到第一个只出现一次的字符,并返回它的位置,
// 如果没有则返回 -1（需要区分大小写）.（从0开始计数）
// "google" 4

//选择排序

class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        if (str.empty()) return -1;

        vector<int> records(str.length() - 1, 0);

        for (int i = 0; i < str.length(); ++i) {
            for (int j = i + 1; j < str.length(); ++j) {
                if (str[j] == str[i]) {
                    records[i] = -1;
                    records[j] = -1;
                }
            }
        }

        for (int i = 0; i < str.length(); ++i) {
            if (records[i] != -1)
                return i;
        }
        return -1;
    }
};

int main() {
    auto *so = new Solution();
//    string str = "google";
    string str = "goog";
    int res = so->FirstNotRepeatingChar(str);
    CppUtils::print(res);
    delete so;
    return 0;
}
