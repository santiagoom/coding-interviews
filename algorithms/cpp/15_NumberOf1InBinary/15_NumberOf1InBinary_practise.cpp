#include <iostream>
#include <vector>
#include <myutils.h>

using namespace std;

class Solution {
public:
    int NumberOf1(int n) {
        int count = 0;
        unsigned int flag = 1;
        for (int i = 0; i < 32; i++) {
            if (n & flag)
                count++;
            flag = flag << 1;
        }
        return count;
    }
};

class Solution1 {
public:
    int NumberOf1(int n) {
        int count = 0;
        unsigned int flag = 1;
        while (flag) {
            if (n & flag)
                count++;
            flag = flag << 1;
        }
        return count;
    }
};

int main() {
//    2019-09-08 16:34:03
//2019-09-08 16:35:43
    auto *so = new Solution1();
    int n = 9;
    int res = so->NumberOf1(n);
    print(res);
    delete so;
    return 0;
}
