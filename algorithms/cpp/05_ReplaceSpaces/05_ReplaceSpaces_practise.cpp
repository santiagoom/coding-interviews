#include <iostream>
#include <vector>

using namespace std;


class Solution {
//    起始位置是指针，将要输出，所以不能直接对指针进行操作。
public:
    void replaceSpace(char *str, int length) {

        if (str == nullptr || 0 >= length)
            return;
        int originLength = 0;
        int spaceNums = 0;
        while (*str != '\0') {
            originLength++;
            if (' ' == *str)
                spaceNums++;
            str++;
        }
        cout << originLength << endl;
        cout << spaceNums << endl;

        int newLength = originLength + spaceNums * 2;
        if (length < newLength)
            return;

//        while (newLength > originLength && originLength >= 0) {
//            if (' ' == str[originLength]) {
//                str[newLength--] = '0';
//                str[newLength--] = '2';
//                str[newLength--] = '%';
//            } else {
//                str[newLength--] = str[originLength];
//            }
//            originLength--;
//        }


        int indexOfOriginal = originLength;
        int indexOfNew = newLength;
        while (indexOfOriginal >= 0 && indexOfNew > indexOfOriginal) {
            cout << str[indexOfOriginal] << endl;

            if (str[indexOfOriginal] == ' ') {
                str[indexOfNew--] = '0';
                str[indexOfNew--] = '2';
                str[indexOfNew--] = '%';
            } else {
                str[indexOfNew--] = str[indexOfOriginal];
            }

            --indexOfOriginal;
        }
    }
};

int main() {
    auto *so = new Solution();
    char str[] = "hello ";
    cout << str << endl;

    int length = 100;
    so->replaceSpace(str, length);

    cout << str << endl;
    delete so;
    return 0;
}
