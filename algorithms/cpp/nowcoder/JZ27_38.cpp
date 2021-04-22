#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//字符串的排列
// 面试题38：字符串的排列
// 题目：输入一个字符串，打印出该字符串中字符的所有排列。例如输入字符串abc，
// 则打印出由字符a、b、c所能排列出来的所有字符串abc、acb、bac、bca、cab和cba。


class Solution {
public:
    vector<string> Permutation(string str) {
        int length = str.length();
        if (length == 0) return {};

        vector<string> res;
        vector<vector<char>> lists;
        vector<char> list;
        vector<int> visits(length, 0);
        sort(str.begin(), str.end());
        backtracking(lists, list, visits, str);
        res = charArray2String(lists);
        return res;
    }

    void backtracking(vector<vector<char>> &lists, vector<char> list, vector<int> &visits, string str) {
        if (list.size() == str.length())
            lists.push_back(list);
        else {
            for (int i = 0; i < str.length(); ++i) {
                if (visits[i] || (i > 0 && str[i] == str[i - 1] && visits[i - 1]))
                    continue;
                visits[i] = 1;
                list.push_back(str[i]);
                backtracking(lists, list, visits, str);
                visits[i] = 0;
                list.pop_back();
            }
        }
    }

    vector<string> charArray2String(vector<vector<char>> lists) {
        vector<string> res;
        for (auto list:lists) {
            string s = "";
            for (auto x:list) {
                s += x;
            }
            res.push_back(s);
        }
        return res;
    }
};


int main() {
    auto *so = new Solution();
    string str = "babbbbb";
    vector<string> ans = so->Permutation(str);
    CppUtils::print_1d_vector(ans);
    delete so;
    return 0;
}
