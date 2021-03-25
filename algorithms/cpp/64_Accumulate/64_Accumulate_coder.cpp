# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
    int Sum_Solution(int n) {
        if (n == 1) return 1;
        else
            return n + Sum_Solution(n - 1);
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
