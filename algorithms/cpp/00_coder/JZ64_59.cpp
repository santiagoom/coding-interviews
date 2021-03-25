# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
    vector<int> maxInWindows(const vector<int> &num, unsigned int size) {
        if (size > num.size() || size == 0) return {};
        int sz = num.size() - size + 1;
        vector<int> v(sz, 0);
        for (int i = 0; i < sz; i++) {
            v[i] = num[i];
            for (int j = i; j < i + size; j++) {
                if (v[i] < num[j]) v[i] = num[j];
            }
        }
        return v;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
