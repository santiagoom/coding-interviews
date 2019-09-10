#include <iostream>
#include <vector>
#include <myutils.h>

using namespace std;

class Solution {
public:
    vector<vector<char>> Print1ToMaxOfNDigits(int n) {
        vector<vector<char>> res;
        vector<char> ch(n);
        for (int i = 0; i < 10; i++) {
            ch[0] = i + '0';
            backtracking(res, ch, n, 0);
        }
        return res;
    }

private:
    void backtracking(vector<vector<char>> &res, vector<char> &ch, int length, int index) {
        if (index == length - 1) {
            res.push_back(ch);
        } else {
            for (int i = 0; i < 10; i++) {
                ch[index + 1] = i + '0';
                backtracking(res, ch, length, index + 1);
            }
        }
    }
};

int main() {
//2019-09-09 10:17:41
//2019-09-09 11:21:45
    auto *so = new Solution();
    vector<vector<char>> res = so->Print1ToMaxOfNDigits(3);
    print_2d_vector(res);
    delete so;
    return 0;
}