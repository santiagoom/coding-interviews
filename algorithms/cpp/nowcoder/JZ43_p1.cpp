#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//左旋转字符串
class Solution {
public:
    string LeftRotateString(string str, int n) {
        string s;
        for (int i = n; i < str.size(); ++i) {
            s += str[i];
        }
        for (int i = 0; i < n; ++i) {
            s += str[i];
        }
        return s;
    }
};

int main() {
    auto *so = new Solution();
    string str = "abcXYZdef";
    int n = 3;
    string res = so->LeftRotateString(str, n);
    CppUtils::print(res);
    delete so;
    return 0;
}