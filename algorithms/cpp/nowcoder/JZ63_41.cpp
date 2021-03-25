# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

// 面试题41：数据流中的中位数
// 题目：如何得到一个数据流中的中位数？如果从数据流中读出奇数个数值，那么
// 中位数就是所有数值排序之后位于中间的数值。如果从数据流中读出偶数个数值，
// 那么中位数就是所有数值排序之后中间两个数的平均值。
class Solution {
public:
    void Insert(int num) {
        a.push_back(num);
    }

    double GetMedian() {
        int n = a.size();
        sort(a.begin(), a.end());
        if (n % 2 == 1)
            return a[n / 2];
        else
            return (a[n / 2] + a[n / 2 - 1]) / 2.0;
    }

private:
    vector<int> a;

};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
