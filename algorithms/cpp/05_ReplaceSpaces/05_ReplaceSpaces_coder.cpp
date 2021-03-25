#include <iostream>

using namespace std;


class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param s string字符串
     * @return string字符串
     */
    string replaceSpace(string s) {
        // write code here

        int originalLength = s.size();
        if (s.empty())
            return s;

        /*originalLength 为字符串str的实际长度*/
        int numberOfBlank = 0;
//        int i = 0;

        for (int i = 0; i < originalLength; ++i) {
            if (s[i] == ' ')
                ++numberOfBlank;
        }
        int newLength = originalLength + numberOfBlank * 2;

        int indexOfOriginal = originalLength;
        int indexOfNew = newLength;

        string res(newLength, ' ');
        while (indexOfOriginal >= 0 && indexOfNew >= indexOfOriginal) {
            if (s[indexOfOriginal] == ' ') {
                res[indexOfNew--] = '0';
                res[indexOfNew--] = '2';
                res[indexOfNew--] = '%';
            } else {
                res[indexOfNew--] = s[indexOfOriginal];
            }
            --indexOfOriginal;
        }
        return res;
    }
};

int main() {
//    passed 2021-03-09-2
    auto *so = new Solution();
    string str = "hello world";
    cout << str << endl;

    string res = so->replaceSpace(str);

    cout << res << endl;

    delete so;
    return 0;
}
