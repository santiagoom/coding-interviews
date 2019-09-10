#include <iostream>
#include <vector>
#include <myutils.h>

using namespace std;


class Solution {
public:
    double Power(double base, int exponent) {
        bool isNegative = false;
        if (exponent < 0) {
            isNegative = true;
            base = 1 / base;
            exponent = -exponent;
        }
        double ans = powUtils(base, exponent);
        return ans;
    }

private:
    double powUtils(double base, int exponent) {
        if (exponent == 0)
            return 1;
        return exponent % 2 == 0 ? Power(base * base, exponent / 2) : base * Power(base * base, exponent / 2);
    }
};

int main() {
    auto *so = new Solution();
    double res = so->Power(2.0, -2);
    print(res);
    delete so;
    return 0;
}
