#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//翻转单词顺序列
//牛客最近来了一个新员工Fish，每天早晨总是会拿着一本英文杂志，写些句子在本子上。
// 同事Cat对Fish写的内容颇感兴趣，有一天他向Fish借来翻看，但却读不懂它的意思。
// 例如，“student. a am I”。后来才意识到，这家伙原来把句子单词的顺序翻转了，
// 正确的句子应该是“I am a student.”。Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？
// 面试题58（一）：翻转单词顺序
// 题目：输入一个英文句子，翻转句子中单词的顺序，但单词内字符的顺序不变。
// 为简单起见，标点符号和普通字母一样处理。例如输入字符串"I am a student. "，
// 则输出"student. a am I"。
class Solution {
public:
    string ReverseSentence(string str) {
        string target;
        int n = 1;
        while (n != -1) {
            n = str.find_last_of(" ");
            if (n != -1 && str.substr(n, str.size()) != " ") {
                target += str.substr(n + 1, str.size());
                target += " ";
            } else if (str != " " && n == -1)
                target += str;
            if (n != -1) {
                str = str.substr(0, n);
            }
        }
        return target;
    }
};


int main() {
    auto *so = new Solution();
    string str = "    I am a student.            ";
    CppUtils::print(str);
    string res = so->ReverseSentence(str);
    CppUtils::print(res);
    delete so;
    return 0;
}