#include <iostream>
#include <vector>
#include <myutils.h>

using namespace std;


class Solution {
public:
    vector<string> Permutation(string str) {
        vector<vector<char>> res;
        vector<char> each;
        vector<int> visit(str.length(), 0);
        sort(str.begin(), str.end());
        backtracking(res, each, visit, str);
        return charArray2string(res);
    }

private:
    void backtracking(vector<vector<char>> &res, vector<char> each, vector<int> visit, string &str) {
        if (each.size() == str.length()) {
            res.push_back(each);
        }
        for (int i = 0; i < str.length(); i++) {
            if (visit[i] || (i > 0 && str[i - 1] == str[i] && visit[i - 1]))
                continue;
            visit[i] = 1;
            each.push_back(str[i]);
            backtracking(res, each, visit, str);
            visit[i] = 0;
            each.pop_back();
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
//2020-02-18-2 15:26:31
//2020-02-18-2 15:45:31
    auto *so = new Solution();
    string s = "aa";
    vector<string> res = so->Permutation(s);
    print_1d_vector(res);
    delete so;
    return 0;
}