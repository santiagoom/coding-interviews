#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

//和为S的连续正数序列
// 面试题57（二）：为s的连续正数序列
// 题目：输入一个正数s，打印出所有和为s的连续正数序列（至少含有两个数）。
// 例如输入15，由于1+2+3+4+5=4+5+6=7+8=15，所以结果打印出3个连续序列1～5、
// 4～6和7～8。

class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int> > res;
        int start = 1;
        int end = 2;
        int tsum = 0;
        while (start < end) {
            tsum = (start + end) * (end - start + 1) / 2;
            if (tsum == sum) {
                vector<int> tmp;
                for (int i = start; i <= end; ++i) {
                    tmp.push_back(i);
                }
                res.push_back(tmp);
                start++;
            } else if (tsum > sum) {
                start++;
            } else {
                end++;
            }
        }
        return res;
    }
};

int main() {
    auto *so = new Solution();
    int sum = 15;
    vector<vector<int> > res = so->FindContinuousSequence(sum);
    CppUtils::print_2d_vector(res);
    delete so;
    return 0;
}