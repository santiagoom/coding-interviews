# include<iostream>
# include<vector>
# include<cppUtils.h>

using namespace std;
typedef CppUtils cu;

class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        priority_queue<int> max_heap;
        vector<int> results;

        if (input.size() < k || k <= 0)
            return results;

        for (auto &val: input) {
            // 堆还不够最小的容量，直接加进去
            if (max_heap.size() < k) {
                max_heap.push(val);
            } else if (max_heap.top() > val) {
                max_heap.push(val);
                max_heap.pop();
            }
        }

        while (max_heap.size()) {
            results.push_back(max_heap.top());
            max_heap.pop();
        }
        reverse(results.begin(), results.end());
        return results;
    }
};

int main() {
    auto *so = new Solution();
    vector<int> input{4, 5, 1, 6, 2, 7, 3, 8};
    int k = 4;
    vector<int> res = so->GetLeastNumbers_Solution(input, 4);
    cu::print_1d_vector(res);
    cout << "new file!" << endl;
    delete so;
    return 0;
}
