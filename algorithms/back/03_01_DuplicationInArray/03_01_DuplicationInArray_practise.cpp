#include <iostream>
#include <vector>

using namespace std;

class Solution {

};


bool duplicate(int numbers[], int length, int *duplication) {
    if (nullptr == numbers || 0 >= length)
        return false;
    for (int i = 0; i < length; i++) {
        if (0 > numbers[i] || length - 1 < numbers[i])
            return false;
    }

    for (int i = 0; i < length; i++) {
        while (i != numbers[i]) {
            if (numbers[i] == numbers[numbers[i]]) {
                *duplication = numbers[i];
                return true;
            }
            int temp = numbers[i];
            numbers[i] = numbers[temp];
            numbers[temp] = temp;
        }
    }
    return false;
}

int main() {
    auto *so = new Solution();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
