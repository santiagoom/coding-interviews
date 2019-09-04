#include <iostream>
#include <vector>

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
//    2019-09-04 10:21:04
    auto *so = new Solution();
    vector<vector<int>> matrix = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};
    bool res = so->Find(4,matrix);
    cout << res << endl;
    delete so;
    return 0;
}
