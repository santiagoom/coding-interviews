#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 面试题40：最小的k个数
// 题目：输入n个整数，找出其中最小的k个数。例如输入4、5、1、6、2、7、3、8
// 这8个数字，则最小的4个数字是1、2、3、4。
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        priority_queue<int> max_heap;
        vector<int> results;

        if (input.size() < k || k <= 0)
            return results;

        for (auto &val: input) {
            // 堆还不够最小的容量，直接加进去
            if (max_heap.size() < k) {
                max_heap.push(val);
            } else if (max_heap.top() > val) {
                max_heap.push(val);
                max_heap.pop();
            }
        }

        while (max_heap.size()) {
            results.push_back(max_heap.top());
            max_heap.pop();
        }
        reverse(results.begin(), results.end());
        return results;
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
