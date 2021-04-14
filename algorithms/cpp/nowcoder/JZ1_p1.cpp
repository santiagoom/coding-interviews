#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 面试题4：二维数组中的查找
// 题目：在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按
// 照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个
// 整数，判断数组中是否含有该整数。

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if (array.empty())
            return false;
        int row = 0;
        int col = array[0].size() - 1;
        while (row < array.size() && col >= 0) {
            if (array[row][col] == target)
                return true;
            else if (array[row][col] < target)
                row++;
            else {
                col--;
            }
        }
        return false;
    }
};

int main() {
    auto *so = new Solution();
    vector<vector<int> > array = {
            {1, 2, 8,  9},
            {2, 4, 9,  12},
            {4, 7, 10, 13},
            {6, 8, 11, 15}
    };
    int target = 7;
    bool res = so->Find(target, array);
    CppUtils::print(res);
    delete so;
    return 0;
}
