#include <iostream>
#include <vector>

using namespace std;


class Solution_re {
//    time exce...
public:
    int Fibonacci(int n) {
        if (n <= 0)
            return 0;
        if (n == 1)
            return 1;
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
};

class Solution {
public:
    int Fibonacci(int n) {
        int first = 0;
        int second = 1;
        int res = n;
        for (int i = 2; i <= n; i++) {
            res = first + second;
            first = second;
            second = res;
        }
        return res;
    }
};

class Solution_ {
public:
    int jumpFloorII(int number) {
        int res = 0;
        if (number == 0)
            return 1;

        for (int i = 1; i <= number; i++) {
            res += jumpFloorII(number - i);
        }
        return res;
    }
};

int main() {
    auto *so = new Solution();
    int n = 10;
    for (int i = 0; i < n; i++) {
        int res = so->Fibonacci(i);
        cout << res << endl;
    }
    delete so;
    return 0;
}
