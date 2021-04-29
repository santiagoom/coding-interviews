#include <iostream>
#include <vector>
#include <map>
#include <cppUtils.h>

using namespace std;

//数组中只出现一次的数字
//一个整型数组里除了两个数字之外，其他的数字都出现了两次。请写程序找出这两个只出现一次的数字。

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param array int整型vector
     * @return int整型vector
     */
    vector<int> FindNumsAppearOnce(vector<int> &array) {
        // write code here
        map<int, int> map;
        vector<int> res;
        for (int i = 0; i < array.size(); ++i) {
            map[array[i]]++;
        }
        for (int i = 0; i < array.size(); ++i) {
            if (map[array[i]] == 1) res.push_back(array[i]);
        }
        if (res[0] > res[1])
            swap(res[0], res[1]);
        return res;
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