# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
    vector<int> multiply(const vector<int> &A) {
        int len = A.size();
        vector<int> B(len);
        int temp = 1;
//        CppUtils::print_1d_vector(A);
        for (int i = 0; i < len; i++) {
            B[i] = temp;
            temp *= A[i];
        }
//        CppUtils::print_1d_vector(B);
        temp = 1;
        for (int i = len - 1; i >= 0; i--) {
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
