# include <iostream>
# include <vector>
# include <cppUtils.h>

using namespace std;

typedef CppUtils cu;

class Solution {

};
void cppTest() {
    std::string str = "str";
    cu::print(str);


    auto *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cu::inorderTraversal(root);
    cu::preorderTraversal(root);
    cu::postorderTraversal(root);

    cu::print();

    auto *l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(3);
    l1->next->next->next = new ListNode(4);
    l1->next->next->next->next = new ListNode(5);
    cu::printLinklist(l1);
    auto *l2 = cu::reverseLinklistRecursive(l1);
    cu::printLinklist(l2);
    auto *l3 = cu::reverseLinklistIterative(l2);
    cu::printLinklist(l3);
}

int main() {
    auto *so = new Solution();
    cppTest();
    cout << "new file!" << endl;
    delete so;
    return 0;
}
