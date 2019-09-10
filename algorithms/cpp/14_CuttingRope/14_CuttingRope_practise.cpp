#include <iostream>
#include <vector>
#include <myutils.h>

using namespace std;

class Solution {
public:
    int cutRope(int number) {
        vector<int> dp(number + 1, 0);

        for (int i = 1; i <= number; i++) {
            int max_val = 0;
            for (int j = 1; j <= i; j++) {
                max_val = max(max_val, (i - j) * j, dp[i - j] * j);
            }
            dp[i] = max_val;
        }
        return dp[number];
    }

private:
    int max(int a, int b) { return a > b ? a : b; }

    int max(int a, int b, int c) { return (a > b ? a : b) > c ? (a > b ? a : b) : c; }
};

int main() {
    auto *so = new Solution();
    int n = 10;
    int res = so->cutRope(n);
    print(res);
    delete so;
    return 0;
}
