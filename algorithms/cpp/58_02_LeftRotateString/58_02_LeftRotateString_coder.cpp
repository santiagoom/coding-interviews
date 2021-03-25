# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
    string LeftRotateString(string str, int n) {
        string s = "";
        for (int i = n; i < str.length(); i++) {
            s += str[i];
        }
        for (int i = 0; i < n; i++) {
            s += str[i];
        }
        return s;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
