#include <iostream>
#include <vector>

using namespace std;


class Solution {

public:
    void ReplaceBlank(char str[], int length) {
        if (str == nullptr && length <= 0)
            return;

        /*originalLength 为字符串str的实际长度*/
        int originalLength = 0;
        int numberOfBlank = 0;
        int i = 0;
        while (str[i] != '\0') {
            ++originalLength;

            if (str[i] == ' ')
                ++numberOfBlank;

            ++i;
        }

        /*newLength 为把空格替换成'%20'之后的长度*/
        int newLength = originalLength + numberOfBlank * 2;
        if (newLength > length)
            return;

        int indexOfOriginal = originalLength;
        int indexOfNew = newLength;
        while (indexOfOriginal >= 0 && indexOfNew > indexOfOriginal) {
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
    char str[] = "hello world";
    cout << str << endl;

    int length = 100;
    so->ReplaceBlank(str, length);
    cout << str << endl;

//    delete so;
//    free(str);
    return 0;
}
