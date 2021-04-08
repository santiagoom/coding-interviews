# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

// 正则表达式匹配
// 面试题19：正则表达式匹配
// 题目：请实现一个函数用来匹配包含'.'和'*'的正则表达式。模式中的字符'.'
// 表示任意一个字符，而'*'表示它前面的字符可以出现任意次（含0次）。在本题
// 中，匹配是指字符串的所有字符匹配整个模式。例如，字符串"aaa"与模式"a.a"
// 和"ab*ac*a"匹配，但与"aa.a"及"ab*a"均不匹配。

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param str string字符串
     * @param pattern string字符串
     * @return bool布尔型
     */
    bool matchCore(string &str, string &pattern, int i, int j) {
        if (i == str.size() && j == pattern.size()) return true;
        if (i != str.size() && j == pattern.size()) return false;
        if (pattern[j + 1] == '*') {
            if (str[i] == pattern[j] || (pattern[j] == '.' && i != str.size())) {
                return matchCore(str, pattern, i + 1, j) || matchCore(str, pattern, i + 1, j + 2) ||
                       matchCore(str, pattern, i, j + 2);
            } else return matchCore(str, pattern, i, j + 2);
        }
        if (str[i] == pattern[j] || (pattern[j] == '.' && i != str.size())) {
            return matchCore(str, pattern, i + 1, j + 1);
        }
        return false;
    }

    bool match(string str, string pattern) {
        return matchCore(str, pattern, 0, 0);
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
