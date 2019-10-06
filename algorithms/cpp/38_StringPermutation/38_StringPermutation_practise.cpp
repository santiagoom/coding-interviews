#include <iostream>
#include <vector>
#include <myutils.h>

using namespace std;


class Solution {
public:
    vector<string> Permutation(string str) {
        vector<string> ans;
        vector<vector<char>> res;
        vector<char> subset;
        int length = str.length();

        if (length == 0) {
            return {};
        }
        vector<int> visit(length, 0);
        backtracking(res, subset, str,visit);
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
    string s = "aa";
    vector<string> res = so->Permutation(s);
    print_1d_vector(res);
    delete so;
    return 0;
}
