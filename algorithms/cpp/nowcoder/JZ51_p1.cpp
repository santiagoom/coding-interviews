#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 构建乘积数组
// 面试题66：构建乘积数组
// 题目：给定一个数组A[0, 1, …, n-1]，请构建一个数组B[0, 1, …, n-1]，其
// 中B中的元素B[i] =A[0]×A[1]×… ×A[i-1]×A[i+1]×…×A[n-1]。不能使用除法。
//输入
//[1,2,3,4,5]
//返回值
//[120,60,40,30,24]

//给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],
// 其中B中的元素B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。不能使用除法。
// （注意：规定B[0] = A[1] * A[2] * ... * A[n-1]，B[n-1] = A[0] * A[1] * ... * A[n-2];）
//对于A长度为1的情况，B无意义，故而无法构建，因此该情况不会存在。

//note
// 1 1 2 6 24
// 120 60 20 5 1

class Solution {
public:
    vector<int> multiply(const vector<int> &A) {
        int len = A.size();
        vector<int> B(len);
        int temp = 1;
        for (int i = 0; i < len; ++i) {
            B[i] = temp;
            temp *= A[i];
        }

        temp = 1;
        for (int i = len - 1; i >= 0; --i) {
            B[i] *= temp;
            temp *= A[i];
        }
        return B;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> nums{1, 2, 3, 4, 5};
    vector<int> res = so->multiply(nums);
    CppUtils::print_1d_vector(res);
    cout << "new file!" << endl;
    delete so;
    return 0;
}