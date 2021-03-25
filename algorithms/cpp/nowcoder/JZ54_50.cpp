# include <iostream>
# include <vector>
# include <cppUtils.h>
#include <map>

using namespace std;

// 面试题50（二）：字符流中第一个只出现一次的字符
// 题目：请实现一个函数用来找出字符流中第一个只出现一次的字符。例如，当从
// 字符流中只读出前两个字符"go"时，第一个只出现一次的字符是'g'。当从该字
// 符流中读出前六个字符"google"时，第一个只出现一次的字符是'l'。
class Solution {
public:
    //Insert one char from stringstream
    void Insert(char ch) {
        str += ch;
        save[ch]++;
    }

    //return the first appearence once char in current stringstream
    char FirstAppearingOnce() {
        for (int i = 0; i < str.size(); i++)
            if (save[str[i]] == 1)
                return str[i];
        return '#';

    }

private:
    string str = "";
    map<char, int> save;
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
