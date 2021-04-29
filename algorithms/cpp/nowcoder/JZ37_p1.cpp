#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 数字在排序数组中出现的次数

class Solution {
public:
    int GetNumberOfK(vector<int> data, int k) {
        int count = 0;
        for (int i = 0; i < data.size(); ++i) {
            if (data[i] == k)
                count++;
        }
        return count;
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

