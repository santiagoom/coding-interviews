#include <iostream>
#include <vector>
#include <cppUtils.h>

typedef CppUtils cu;

using namespace std;

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param array int整型vector
     * @return int整型vector
     */
    vector<int> reOrderArray(vector<int> &array) {
        // write code here
        if (array.size() <= 1) return array;
        for (int i = 0; i < array.size(); i++) {
            if (array[i] % 2 == 0) continue;
            else {
                int j = i;
                while (j > 0 && array[j - 1] % 2 == 0) {
                    swap(array[j], array[j - 1]);
                    --j;
                }
            }
        }
        return array;
    }
};

class Solution1 {
public:
    vector<int> reOrderArray(vector<int> &array) {
        vector<int> odd;
        vector<int> even;
        for (auto i : array) {
            if (i % 2 == 1) odd.push_back(i);
            else even.push_back(i);
        }
        for (auto i : even) {
            odd.push_back(i);
        }
        return odd;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> nums{2, 4, 6, 1, 3, 5, 7};
    cu::print_1d_vector(nums);
    vector<int> res = so->reOrderArray(nums);
    cu::print_1d_vector(res);

    delete so;
    return 0;
}
