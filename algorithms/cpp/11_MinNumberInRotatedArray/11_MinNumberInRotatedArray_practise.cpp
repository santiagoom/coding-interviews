#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int minNumberInRotateArray(vector<int> &rotateArray) {
        int res = 0;
        if (rotateArray.empty())
            return res;

        int start = 0;
        int end = rotateArray.size() - 1;
        int mid = start;
        while (rotateArray[start] >= rotateArray[end]) {
            if (end - start == 1)
                return rotateArray[end];
            mid = (start + end) / 2;
            if (rotateArray[start] == rotateArray[end] && rotateArray[start] == rotateArray[mid])
                return minNumInSequence(rotateArray, start, end);
            if (rotateArray[mid] >= rotateArray[start])
                start = mid;
            else if (rotateArray[mid] <= rotateArray[end])
                end = mid;
        }
        return rotateArray[mid];
    }

private:

    int minNumInSequence(vector<int> &rotateArray, int start, int end) {
        int ans = rotateArray[start];
        for (int i = start + 1; i <= end; i++) {
            if (rotateArray[i] < ans)
                ans = rotateArray[i];
        }
        return ans;
    }
};

int main() {
//    2019-09-06 15:36:21
//2019-09-06 16:14:02
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
