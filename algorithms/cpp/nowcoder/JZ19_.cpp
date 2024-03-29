#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//顺时针打印矩阵
//单行单列回撤现象由 if (r1 < r2 && c1 < c2)判断
class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> ans;
        if (matrix.empty())
            return ans;
        int r1 = 0, r2 = matrix.size() - 1;
        int c1 = 0, c2 = matrix[0].size() - 1;
        while (r1 <= r2 && c1 <= c2) {
            for (int c = c1; c <= c2; c++)
                ans.push_back(matrix[r1][c]);
            for (int r = r1 + 1; r <= r2; r++)
                ans.push_back(matrix[r][c2]);
            if (r1 < r2 && c1 < c2) {
                for (int c = c2 - 1; c > c1; c--)
                    ans.push_back(matrix[r2][c]);
                for (int r = r2; r > r1; r--)
                    ans.push_back(matrix[r][c1]);
            }
            r1++;
            r2--;
            c1++;
            c2--;
        }
        return ans;
    }
};

class Solution1 {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> ans;
        if (matrix.empty())
            return ans;
        int r1 = 0, r2 = matrix.size() - 1;
        int c1 = 0, c2 = matrix[0].size() - 1;
        while (r1 <= r2 && c1 <= c2) {
            for (int c = c1; c <= c2; c++)
                ans.push_back(matrix[r1][c]);
            CppUtils::print_1d_vector(ans);

            for (int r = r1 + 1; r <= r2; r++)
                ans.push_back(matrix[r][c2]);
            CppUtils::print_1d_vector(ans);
            if (r1 < r2 && c1 < c2) {

                for (int c = c2 - 1; c >= c1; c--)
                    ans.push_back(matrix[r2][c]);
                CppUtils::print_1d_vector(ans);

                for (int r = r2 - 1; r > r1; r--)
                    ans.push_back(matrix[r][c1]);
            }
            r1++;
            r2--;
            c1++;
            c2--;
            CppUtils::print_1d_vector(ans);

        }
        return ans;
    }
};

class Solution2 {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> ans;
        if (matrix.empty())
            return ans;
        int r1 = 0, r2 = matrix.size() - 1;
        int c1 = 0, c2 = matrix[0].size() - 1;
        while (r1 <= r2 && c1 <= c2) {
            for (int c = c1; c <= c2; c++)
                ans.push_back(matrix[r1][c]);
            for (int r = r1 + 1; r <= r2; r++)
                ans.push_back(matrix[r][c2]);
            if (r1 < r2 && c1 < c2) {
                for (int c = c2 - 1; c >= c1; c--)
                    ans.push_back(matrix[r2][c]);
                for (int r = r2 - 1; r > r1; r--)
                    ans.push_back(matrix[r][c1]);
            }
            r1++;
            r2--;
            c1++;
            c2--;
        }
        return ans;
    }
};

int main() {
    auto *so = new Solution2();
    vector<int> res;
//    vector<vector<int> > array = {
//            {1, 2, 8,  9},
//            {2, 4, 9,  12},
//            {4, 7, 10, 13},
//            {6, 8, 11, 15}
//    };
    vector<vector<int> > array = {
            {1,},
            {2,},
            {4,},
            {6,}
    };
//    vector<vector<int> > array = {
//            {1, 2, 8,  9},
//    };
//    CppUtils::print_2d_vector(array);
    res = so->printMatrix(array);
//    CppUtils::print_1d_vector(res);
    delete so;
    return 0;
}
