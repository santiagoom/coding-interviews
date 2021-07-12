#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//字符串的排列
// 面试题38：字符串的排列
// 题目：输入一个字符串，打印出该字符串中字符的所有排列。例如输入字符串abc，
// 则打印出由字符a、b、c所能排列出来的所有字符串abc、acb、bac、bca、cab和cba。


//if (visit[i] || (i > 0 && str[i - 1] == str[i] && visit[i - 1]))
//continue;
// 需要依靠visit[i]向前遍历


class Solution {
public:
    vector<string> Permutation(string str) {
        int length = str.length();
        if (length == 0) {
            return {};
        }
        sort(str.begin(), str.end());
        vector<string> ans;
        vector<vector<char>> res;
        vector<char> subset;
        vector<int> visit(length, 0);
        backtracking(res, subset, str, visit);
        ans = charArray2string(res);
        return ans;
    }

    void backtracking(vector<vector<char>> &res, vector<char> subset, string str, vector<int> visit) {
        if (subset.size() == str.length())
            res.push_back(subset);
        else {
            for (int i = 0; i < str.length(); i++) {
                if (visit[i] || (i > 0 && str[i - 1] == str[i] && visit[i - 1]))
                    continue;
                visit[i] = 1;
                subset.push_back(str[i]);
                backtracking(res, subset, str, visit);
                visit[i] = 0;
                subset.pop_back();
            }
        }
    }

    vector<string> charArray2string(vector<vector<char>> &res) {
        vector<string> ans;
        for (auto &level:res) {
            string s = "";
            for (char &ele:level)
                s += ele;
            ans.push_back(s);
        }
        return ans;
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
