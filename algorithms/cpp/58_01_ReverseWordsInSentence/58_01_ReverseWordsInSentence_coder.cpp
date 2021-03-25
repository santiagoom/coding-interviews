# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
    string ReverseSentence(string str) {
        string target = "";
        int n = 1;
        while (n != -1) {
            n = str.find_last_of(" ");
            if (str != " " && n == -1) {
                target += str;
            } else if (str.substr(n + 1, str.size()) != " ") {
                target += str.substr(n + 1, str.size());
                target += " ";
            }
            if (n != -1) {
                str = str.substr(0, n);
            }
        }
        return target;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
