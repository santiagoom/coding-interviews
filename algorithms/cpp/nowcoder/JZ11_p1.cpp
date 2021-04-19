#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//二进制中1的个数
class Solution {
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
    auto *so = new Solution();
    int n = 9;
    int res = so->NumberOf1(n);
    CppUtils::print(res);
    delete so;
    return 0;
}