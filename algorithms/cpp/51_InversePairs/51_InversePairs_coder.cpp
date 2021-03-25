# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
    int cnt;

    void merge_sort(vector<int> &data, vector<int> &arr, int left, int right) {
        if (left < right) {
            int section_len = (right - left) >> 2;
            merge_sort(arr, data, left, left + section_len);
            merge_sort(arr, data, left + section_len + 1, right);
            int mid_l = left + section_len, l = mid_l, r = right, idx = right;
            for (; l >= left && r > mid_l;) {
                if (data[l] > data[r]) {
                    cnt += r - mid_l;
                    cnt %= 1000000007;
                    arr[idx--] = data[l--];
                    continue;
                }
                arr[idx--] = data[r--];;
            }
            for (; l >= left;) arr[idx--] = data[l--];
            for (; r > mid_l;) arr[idx--] = data[r--];
        }
    }

    int InversePairs(vector<int> data) {
        cnt = 0;
        vector<int> arr(data);
        merge_sort(data, arr, 0, data.size() - 1);

        return cnt;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
