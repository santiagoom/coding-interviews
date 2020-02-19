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
        int root = sequence[end];
        int i = start;
        for (; i < end; i++) {
            if (sequence[i] > root)
                break;
        }
        int j = i;
        for (; j < end; ++j) {
            if (sequence[j] < root)
                return false;
        }
        bool left = true;
        if (i > start)
            left = helper(sequence, start, i - 1);
        bool right = true;
        if (i < end)
            right = helper(sequence, i, end - 1);
        return (left && right);

    }

};

int main() {
    auto *so = new Solution();
//    vector<int> nums{3, 2, 1};
    vector<int> nums{1, 3, 2, 5, 4};
    bool res = so->VerifySquenceOfBST(nums);
    print(res);

//    int data[] = {1, 2, 3, 4, 5};
//    cout<<data<<endl;
    delete so;
    return 0;
}
