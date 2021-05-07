# include <iostream>
# include <vector>
# include <cppUtils.h>
#include <map>

using namespace std;

// 字符流中第一个不重复的字符
// 面试题50（二）：字符流中第一个只出现一次的字符
// 题目：请实现一个函数用来找出字符流中第一个只出现一次的字符。例如，当从
// 字符流中只读出前两个字符"go"时，第一个只出现一次的字符是'g'。当从该字
// 符流中读出前六个字符"google"时，第一个只出现一次的字符是'l'。

class Solution {
public:
    //Insert one char from stringstream
    void Insert(char ch) {
        str += ch;
        records[ch]++;
    }

    //return the first appearence once char in current stringstream
    char FirstAppearingOnce() {
        for (int i = 0; i < str.size(); ++i) {
            if (records[str[i]] == 1)
                return str[i];
        }
        return '#';
    }

private:
    string str;
    map<char, int> records;
};

int main() {
    auto *so = new Solution();
    string str = "google";
    so->Insert('g');
    so->Insert('o');
    so->Insert('o');
    so->Insert('g');
    so->Insert('l');
    so->Insert('e');
    char first = so->FirstAppearingOnce();
    CppUtils::print(first);
    delete so;
    return 0;
}

