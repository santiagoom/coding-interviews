# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

// 面试题20：表示数值的字符串
// 题目：请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。例如，
// 字符串“+100”、“5e2”、“-123”、“3.1416”及“-1E-16”都表示数值，但“12e”、
// “1a3.14”、“1.2.3”、“+-5”及“12e+5.4”都不是

class Solution {
public:
    bool isNumeric(string str) {
        bool sign = false, decimal = false, hasE = false;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == 'e' || str[i] == 'E') {
                if (i == str.size() - 1) return false;
                if (hasE) return false;
                hasE = true;
            } else if (str[i] == '+' || str[i] == '-') {
                if (sign && str[i - 1] != 'e' && str[i - 1] != 'E') return false;
                if (!sign && i > 0 && str[i - 1] != 'e' && str[i - 1] != 'E') return false;
                sign = true;
            } else if (str[i] == '.') {
                if (hasE || decimal) return false;
                decimal = true;
            } else if (str[i] - '0' < 0 || str[i] - '0' > 9)
                return false;
        }
        return true;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}

