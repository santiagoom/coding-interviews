# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

class Solution {
public:
/**
 *
 * @param index int整型
 * @return int整型
 */
    int GetUglyNumber_Solution(int index) {
        // write code here
        int arr[index];
        int i2 = 1, i3 = 1, i5 = 1;

        arr[0] = 0;
        arr[1] = 1;

        int tmp, tmp2, tmp3, tmp5;
        for (int i = 1; i < index; i++) {
            tmp2 = 2 * arr[i2];
            tmp3 = 3 * arr[i3];
            tmp5 = 5 * arr[i5];
            tmp = (tmp2 < tmp3) ? tmp2 : tmp3;
            tmp = (tmp < tmp5) ? tmp : tmp5;
            arr[i + 1] = tmp;
            if (tmp == tmp2)
                i2++;
            if (tmp == tmp3)
                i3++;
            if (tmp == tmp5)
                i5++;
        }
        return arr[index];
    }
};

class Solution1 {
    // time exceeding
public:
    int GetUglyNumber_Solution(int index) {
        if (index <= 0)
            return 0;

        int number = 0;
        int uglyFound = 0;
        while (uglyFound < index) {
            ++number;

            if (IsUgly(number))
                ++uglyFound;
        }

        return number;
    }

    bool IsUgly(int number) {
        while (number % 2 == 0)
            number /= 2;
        while (number % 3 == 0)
            number /= 3;
        while (number % 5 == 0)
            number /= 5;

        return (number == 1) ? true : false;
    }
};

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
