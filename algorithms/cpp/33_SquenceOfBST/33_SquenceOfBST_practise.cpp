#include <iostream>
#include <vector>
#include <myutils.h>

using namespace std;

class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if (sequence.empty())
            return false;
        int length = sequence.size();
        return helper(sequence, 0, length - 1);

    }

private:
    bool helper(vector<int> &sequence, int start, int end) {
        if (sequence.empty() || start > end)
            return false;
        int root = sequence[end];
        int i = 0;
        for (; i < end; ++i) {
            if (sequence[start] > root)
                break;
        }
        int j = i;
        for (; j < end; ++j) {
            if (sequence[j] < root)
                return false;
        }
        bool left = true;
        if (i > 0)
            left = helper(sequence, start, i);
        bool right = true;
        if (i < end)
            right = helper(sequence, i + 1, end - 1);
        return (left && right);
    }
};

int main() {
    auto *so = new Solution();
    vector<int> nums{3, 2, 1};
    bool res = so->VerifySquenceOfBST(nums);
    print(res);
    delete so;
    return 0;
}
