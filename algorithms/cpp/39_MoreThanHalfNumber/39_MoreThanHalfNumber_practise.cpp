#include <iostream>
#include <vector>
#include <myutils.h>

using namespace std;


class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> &numbers) {
        if (numbers.empty())
            return 0;
        int res = numbers[0];
        int time = 1;
        for (int i = 0; i < numbers.size(); i++) {
            if (time == 0) {
                res = numbers[i];
                time = 1;
            } else if (numbers[i] == res) {
                time++;
            } else {
                time--;
            }
        }

        time = 0;
        for (int i = 0; i < numbers.size(); i++) {
            if (numbers[i] == res)
                time++;
        }
        if (time * 2 > numbers.size())
            return res;
        return 0;
    }
};

int main() {
//2020-02-18-2 16:37:45
//2020-02-18-2 16:49:49
    auto *so = new Solution();
    vector<int> nums{1, 2, 3, 2, 2, 2, 5, 4, 2};
    int res = so->MoreThanHalfNum_Solution(nums);
    print(res);
    delete so;
    return 0;
}
