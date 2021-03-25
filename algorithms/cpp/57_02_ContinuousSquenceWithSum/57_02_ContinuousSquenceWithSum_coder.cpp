# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int>> res;
        int low = 1;
        int high = 2;
        int tsum;
        while (low < high) {
            tsum = (low + high) * (high - low + 1) / 2;
            if (tsum == sum) {
                vector<int> tmp;
                for (int i = low; i <= high; i++) {
                    tmp.push_back(i);
                }
                res.push_back(tmp);
                low++;
            } else if (tsum < sum) {
                high++;
            } else low++;
        }
        return res;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
