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
        if (input.size() < k || k <= 0) return {};

        vector<int> res;
        priority_queue<int> max_heap;
        for (int i = 0; i < input.size(); ++i) {
            if (i < k) {
                max_heap.push(input[i]);
                continue;
            }
            if (input[i] < max_heap.top()) {
                max_heap.pop();
                max_heap.push(input[i]);
            }
        }
        for (int i = 0; i < k; ++i) {
            res.push_back(max_heap.top());
            max_heap.pop();
        }
        sort(res.begin(), res.end());
        return res;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> nums{4, 5, 1, 6, 2, 7, 3, 8};
    int k = 4;
    vector<int> res = so->GetLeastNumbers_Solution(nums, 4);
    CppUtils::print_1d_vector(res);
    delete so;
    return 0;
}