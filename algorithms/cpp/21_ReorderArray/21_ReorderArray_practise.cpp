#include <iostream>
#include <vector>
#include <myutils.h>

using namespace std;


class Solution {
public:
    void reOrderArray(vector<int> &array) {
        for (int i = 0; i < array.size(); i++) {
            for (int j = array.size() - 1; j > i; j--) {
                if (array[j] % 2 == 1 && array[j - 1] % 2 == 0) {
                    swap(array[j], array[j - 1]);
                }
            }
//            print_1d_vector(array);
        }
    }
};

class Solution_ {
public:
    void reOrderArray(vector<int> &array) {
        int start = 0, end = array.size() - 1;
        while (start < end) {
            while (array[start] % 2 == 1)
                start++;
            while (array[end] % 2 == 0)
                end--;
            int temp = array[end];
            array[end] = array[start];
            array[start] = temp;
            start++;
            end--;
        }
    }
};

int main() {
//    2019-09-09 11:37:11
//2019-09-09 11:43:41
    auto *so = new Solution();
    vector<int> nums{2, 4, 6, 1, 3, 5, 7};
    print_1d_vector(nums);
    so->reOrderArray(nums);
    print_1d_vector(nums);
    delete so;
    return 0;
}
