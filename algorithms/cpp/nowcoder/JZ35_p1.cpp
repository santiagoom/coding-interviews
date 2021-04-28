#include <iostream>
#include <vector>
#include <cppUtils.h>

using namespace std;

// 数组中的逆序对

class Solution {
public:
    int InversePairs(vector<int> data) {
        int length = data.size();
        int res = 0;
        mergeSort(data, 0, length - 1, res);
        return res;
    }

    void mergeSort(vector<int> &nums, int start, int end, int &res) {
        if (start < end) {
            int mid = (start + end) / 2;
            mergeSort(nums, start, mid, res);
            mergeSort(nums, mid + 1, end, res);
            merge(nums, start, mid, end, res);
        }

    }

    void merge(vector<int> &nums, int start, int mid, int end, int &res) {
        vector<int> tempVec(nums.size(), 0);
        int right = mid + 1;
        int third = start;
        int temp = start;
        while (start <= mid && right <= end) {
            if (nums[start] <= nums[right]) {
                tempVec[third++] = nums[start++];
            } else {
                tempVec[third++] = nums[right++];
                res += mid - start + 1;
//                CppUtils::print(res);
            }
        }
        while (right <= end) {
            tempVec[third++] = nums[right++];
        }
        while (start <= mid) {
            tempVec[third++] = nums[start++];
        }
        while (temp <= end) {
            nums[temp] = tempVec[temp];
            temp++;
        }
    }
};

int main() {
    auto *so = new Solution();
//    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 0};
//    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 0, 34, 23};
//    vector<int> nums{5, 6, 7, 1, 2, 3};
    vector<int> nums{2, 6, 7, 1, 3, 4};

    int res = so->InversePairs(nums);
    CppUtils::print(res);
    delete so;
    return 0;
}
