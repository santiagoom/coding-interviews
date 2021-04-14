#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 面试题5：替换空格
// 题目：请实现一个函数，把字符串中的每个空格替换成"%20"。例如输入“We are happy.”，
// 则输出“We%20are%20happy.”。

// note
// while (newLength > 0 && newLength >= originLenth) {

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param s string字符串
     * @return string字符串
     */
    string replaceSpace(string s) {
        // write code here
        int originLenth = s.length();
        int spaceCount = 0;
        for (int i = 0; i < originLenth; ++i) {
            if (s[i] == ' ')
                spaceCount++;
        }

        int newLength = originLenth + 2 * spaceCount;
        string res(newLength, ' ');
        while (newLength > 0 && newLength >= originLenth) {
            if (s[--originLenth] == ' ') {
                res[--newLength] = '0';
                res[--newLength] = '2';
                res[--newLength] = '%';
            } else {
                res[--newLength] = s[originLenth];
            }

//            char tmp = s[originLenth];
//            CppUtils::print(tmp);
//            CppUtils::print(newLength);
//            CppUtils::print(originLenth);
//            CppUtils::print(res);
        }
        return res;
    }
};

int main() {
    auto *so = new Solution();
    string str = "We Are Happy";
    string res = so->replaceSpace(str);
    CppUtils::print(res);
    delete so;
    return 0;
}
