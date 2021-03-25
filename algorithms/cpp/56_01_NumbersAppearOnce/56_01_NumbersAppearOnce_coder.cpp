# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
    int GetNumberOfK(vector<int> data, int k) {
        int length = data.size();
        int m = 0;
        for (int i = 0; i < length; ++i) {
            if (data[i] == k)
                m++;
        }
        return m;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
