# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array, int sum) {
        vector<int> result;
        int i = 0, j = array.size() - 1;
        while (i < j) {
            if (array[i] + array[j] == sum) {
                result.push_back(array[i]);
                result.push_back(array[j]);
                break;
            } else if (array[i] + array[j] < sum) {
                i++;
            } else {
                j--;
            }
        }
        return result;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
