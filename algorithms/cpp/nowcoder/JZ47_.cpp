#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//求1+2+3+...+n
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
    vector<int> nums{1, 2, 3, 4, 5, 6};
    string str = "coding for fun!";
    vector<vector<int> > array = {
            {1, 2, 8,  9},
            {2, 4, 9,  12},
            {4, 7, 10, 13},
            {6, 8, 11, 15}
    };
    CppUtils::print_1d_vector(nums);
    CppUtils::print_2d_vector(array);
    CppUtils::print(str);
    delete so;
    return 0;
}
