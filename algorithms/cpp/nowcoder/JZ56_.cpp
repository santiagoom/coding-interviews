#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

class Solution {
public:

};

int main() {
    auto *so = new Solution();
    vector<int> nums{1, 2, 3, 4, 5, 6};
    CppUtils::print_1d_vector(nums);
    delete so;
    return 0;
}
    