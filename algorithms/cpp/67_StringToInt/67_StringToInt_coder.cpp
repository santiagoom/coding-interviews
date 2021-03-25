# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
    int StrToInt(string str) {
        if (str.size() == 0) return 0;
        long long ans = 0;
        int index;
        int sign = 1;
        int tmp;
        if (str[0] == '+') { index = 1; }
        else if (str[0] == '-') {
            index = 1;
            sign = -1;
        } else index = 0;
        for (; index < str.length(); ++index) {
            if (str[index] >= '0' && str[index] <= '9') {
                tmp = str[index] - '0';
                ans = ans * 10 + tmp;
                // if(sign==1 && ans>INT_MAX) return 0;
                //if(sign==-1 && ans < INT_MIN) return 0;
            } else return 0;
        }
        return sign * ans;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
