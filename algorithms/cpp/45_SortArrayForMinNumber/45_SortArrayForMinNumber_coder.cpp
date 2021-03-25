# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;
typedef CppUtils cu;

class Solution {
public:
    string PrintMinNumber(vector<int> numbers) {
        string str;
        if (numbers.size() <= 0) return str;

        sort(numbers.begin(), numbers.end(), cmp);

        for (int i = 0; i < numbers.size(); i++) {
            str += to_string(numbers[i]);
        }
        return str;
    }

    static bool cmp(int a, int b) {
        string A = to_string(a) + to_string(b);
        string B = to_string(b) + to_string(a);
        return A < B;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> input{333, 32, 321};
//    vector<int> input{333, 32, 323};
    string res = so->PrintMinNumber(input);
    cu::print(res);
    cout << "new file!" << endl;
    delete so;
    return 0;
}
