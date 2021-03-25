# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param array int整型vector
     * @return int整型vector
     */
    vector<int> FindNumsAppearOnce(vector<int> &array) {
        // write code here

        map<int, int> mp;
        int len = array.size();
        for (int i = 0; i < len; i++) {
            mp[array[i]]++;
        }
        vector<int> v;

        for (int i = 0; i < len; i++) {
            if (mp[array[i]] == 1) v.push_back(array[i]);
        }
        if (v[0] > v[1])swap(v[0], v[1]);
        return v;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
