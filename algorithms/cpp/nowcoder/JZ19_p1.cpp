#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//顺时针打印矩阵
//单行单列回撤现象由 if (r1 < r2 && c1 < c2)判断

class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        if (matrix.empty()) return {};

        vector<int> res;
        int r2 = matrix.size() - 1;
        int c2 = matrix[0].size() - 1;
        int r1 = 0, c1 = 0;

        while (r1 <= r2 && c1 <= c2) {
            for (int i = c1; i <= c2; ++i)
                res.push_back(matrix[r1][i]);

            for (int i = r1 + 1; i <= r2; ++i)
                res.push_back(matrix[i][c2]);

            if (r1 < r2 && c1 < c2) {
                for (int i = c2 - 1; i >= c1; --i)
                    res.push_back(matrix[r2][i]);

                for (int i = r2 - 1; i > r1; --i)
                    res.push_back(matrix[i][c1]);
            }
            r2--;
            c2--;
            r1++;
            c1++;
        }
        return res;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> res;
    vector<vector<int> > array = {
            {1, 2, 8,  9},
            {2, 4, 9,  12},
            {4, 7, 10, 13},
            {6, 8, 11, 15}
    };
//    vector<vector<int> > array = {
//            {1,},
//            {2,},
//            {4,},
//            {6,}
//    };
//    vector<vector<int> > array = {
//            {1, 2, 8,  9},
//    };
//    CppUtils::print_2d_vector(array);
    res = so->printMatrix(array);
    CppUtils::print_1d_vector(res);
    delete so;
    return 0;
}
