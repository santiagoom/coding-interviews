# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;


class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param matrix string字符串
     * @param rows int整型
     * @param cols int整型
     * @param str string字符串
     * @return bool布尔型
     */
    bool hasPath(string matrix, int rows, int cols, string str) {
        bool *visited = new bool[rows * cols];
        memset(visited, 0, rows * cols);
        int pathLength = 0;
        for (int row = 0; row < rows; row++)
            for (int col = 0; col < cols; col++) {
                if (hasPathCore(matrix, rows, cols, row, col, str, pathLength, visited))
                    return true;
            }
        delete[] visited;
        return false;
    }

    bool hasPathCore(string matrix, int rows, int cols, int row, int col, string str, int &pathLength, bool *visited) {
        if (str[pathLength] == '\0')
            return true;
        bool hasPath = false;
        if (row >= 0 && row < rows && col >= 0 && col < cols && matrix[row * cols + col] == str[pathLength] &&
            !visited[row * cols + col]) {
            pathLength++;
            visited[row * cols + col] = true;
            hasPath = hasPathCore(matrix, rows, cols, row + 1, col, str, pathLength, visited) ||
                      hasPathCore(matrix, rows, cols, row, col + 1, str, pathLength, visited) ||
                      hasPathCore(matrix, rows, cols, row - 1, col, str, pathLength, visited) ||
                      hasPathCore(matrix, rows, cols, row, col - 1, str, pathLength, visited);
            if (!hasPath) {
                pathLength--;
                visited[row * cols + col] = false;
            }
        }
        return hasPath;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
