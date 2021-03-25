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
     * @param numbers int整型vector
     * @return int整型
     */
    int duplicate(vector<int> &numbers) {
        // write code here
        for (int i = 0; i < numbers.size(); ++i) {
            while (numbers[i] != i) {
                if (numbers[i] == numbers[numbers[i]]) return numbers[i];
                else swap(numbers[i], numbers[numbers[i]]);
            }
        }
        return -1;
    }
};

class Solution1 {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param numbers int整型vector
     * @return int整型
     */
    int duplicate(vector<int> &numbers) {
        sort(numbers.begin(), numbers.end());
        for (int i = 0; i < numbers.size(); i++) {
            if (numbers[i] == numbers[i + 1])
                return numbers[i];
        }
        return -1;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
