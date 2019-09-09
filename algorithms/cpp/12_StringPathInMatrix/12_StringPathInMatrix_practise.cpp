#include <iostream>
#include <vector>
#include <myutils.h>

using namespace std;

class Solution {
public:
    bool hasPath(char *matrix, int rows, int cols, char *str) {
        if (nullptr == matrix || rows < 1 || cols < 1 || nullptr == str)
            return false;

        int pathLength = 0;
        bool *visited = new bool[rows * cols];
        memset(visited, 0, rows * cols);

        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                if (helper(matrix, rows, cols, row, col, pathLength, str, visited))
                    return true;
            }
        }
        delete[] visited;
        return false;
    }

private:
    bool helper(char *matrix, int rows, int cols, int row, int col, int &pathLength, char *str, bool *visited) {
        if ('\0' == str[pathLength])
            return true;
        bool hasPath = false;

        if (0 <= row && row < rows && 0 <= col && col < cols && matrix[row * cols + col] == str[pathLength] &&
            !visited[row * cols + col]) {
            pathLength++;
            visited[row * cols + col] = true;

            hasPath = helper(matrix, rows, cols, row - 1, col, pathLength, str, visited) ||
                      helper(matrix, rows, cols, row + 1, col, pathLength, str, visited) ||
                      helper(matrix, rows, cols, row, col - 1, pathLength, str, visited) ||
                      helper(matrix, rows, cols, row, col + 1, pathLength, str, visited);
            if (!hasPath) {
                pathLength--;
                visited[row * cols + col] = false;
            }
        }
        return hasPath;
    }
};

int main() {
//    2019-09-08 16:58:20
//2019-09-08 17:18:05
    auto *so = new Solution();
    char *matrix = "ABTGCFCSJDEH";
    char *str = "BFCE";
    bool res = so->hasPath(matrix, 3, 4, str);
    print(res);
    delete so;
    return 0;
}
