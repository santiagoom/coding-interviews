#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int> > &array) {
        if (array.empty())
            return false;

        int row = 0, col = array[0].size() - 1;
        while (row < array.size() && col >= 0) {
            if (target == array[row][col]) {
                return true;
            } else if (target > array[row][col]) {
                row++;
            } else {
                col--;
            }
        }
        return false;
    }
};

int main() {
    auto *so = new Solution();
    vector<vector<int> > array = {
            {1, 2, 8, 9},
            {2, 4, 9, 12},
            {4, 7, 10, 13},
            {6, 8, 11, 15}
    };
    int target = 7;
    bool res = so->Find(7, array);
    CppUtils::print(res);
    delete so;
    return 0;
}
    