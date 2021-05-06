#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//求1+2+3+...+n
//求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
class Solution {
public:
    int Sum_Solution(int n) {
        if (n == 1) return 1;
        return Sum_Solution(n - 1) + n;
    }
};

int main() {
    auto *so = new Solution();
    int n = 100;
    int res = so->Sum_Solution(n);
    CppUtils::print(res);
    delete so;
    return 0;
}
