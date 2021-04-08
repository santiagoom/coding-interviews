# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

// 滑动窗口的最大值
// 面试题59（一）：滑动窗口的最大值
// 题目：给定一个数组和滑动窗口的大小，请找出所有滑动窗口里的最大值。例如，
// 如果输入数组{2, 3, 4, 2, 6, 2, 5, 1}及滑动窗口的大小3，那么一共存在6个
// 滑动窗口，它们的最大值分别为{4, 4, 6, 6, 6, 5}，

class Solution {
public:
    vector<int> maxInWindows(const vector<int> &num, unsigned int size) {
        if (size > num.size() || size == 0) return {};
        int sz = num.size() - size + 1;
        vector<int> v(sz, 0);
        for (int i = 0; i < sz; i++) {
            v[i] = num[i];
            for (int j = i; j < i + size; j++) {
                if (v[i] < num[j]) v[i] = num[j];
            }
        }
        return v;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
