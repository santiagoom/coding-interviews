#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>

using namespace std;


class Solution {
public:
    void replaceSpace(char *str, int length) {
        if (str == nullptr || 0 >= length)
            return;

        int originLength = 0;
        int spaceNums = 0;
        int i = 0;
        while (str[i] != '\0') {
            originLength++;
            if (' ' == str[i])
                spaceNums++;
            i++;
        }

        int newLength = originLength + spaceNums * 2;
        if (length < newLength)
            return;

        while (newLength > originLength && originLength >= 0) {
            if (' ' == str[originLength]) {
                str[newLength--] = '0';
                str[newLength--] = '2';
                str[newLength--] = '%';
            } else {
                str[newLength--] = str[originLength];
            }
            originLength--;
        }
    }
};

int main() {
    auto *so = new Solution();
    char str[] = "hello world";
    cout << str << endl;

    int length = 100;
    so->replaceSpace(str, length);
    cout << str << endl;

    delete so;
    return 0;
}
