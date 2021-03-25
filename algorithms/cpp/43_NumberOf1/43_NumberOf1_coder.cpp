# include<iostream>
# include<vector>
# include<cppUtils.h>

using namespace std;

class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n) {

        int number = 0;

        for (unsigned int i = 1; i <= n; ++i)
            number += NumberOf1(i);

        return number;

    }

    int NumberOf1(unsigned int n) {
        int number = 0;
        while (n) {
            if (n % 10 == 1)
                number++;

            n = n / 10;
        }

        return number;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
