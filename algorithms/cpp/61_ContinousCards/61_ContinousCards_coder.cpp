# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
    bool IsContinuous(vector<int> numbers) {
        int numberLen = numbers.size();
        if (numberLen < 5)
            return false;
        int res[14] = {0};
        int max = -1;
        int min = 14;
        for (int i = 0; i < numberLen; i++) {
            res[numbers[i]]++;
            if (numbers[i] == 0)
                continue;
            if (res[numbers[i]] > 1)
                return false;
            if (numbers[i] > max)
                max = numbers[i];
            if (numbers[i] < min)
                min = numbers[i];
        }
        if (max - min < 5)
            return true;
        return false;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
