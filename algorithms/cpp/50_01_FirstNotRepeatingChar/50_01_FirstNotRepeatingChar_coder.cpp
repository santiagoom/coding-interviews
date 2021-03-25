# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        for (int i = 0; i < str.size(); i++) {
            char record = str[i];
            for (int j = i + 1; j < str.size(); j++) {
                if (record == str[j]) {
                    str[j] = -1;
                    str[i] = -1;
                }
            }
        }
        for (int i = 0; i < str.size(); i++) {
            if (str[i] != -1) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
