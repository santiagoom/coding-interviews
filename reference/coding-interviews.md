## 面试题4：二维数组中的查找

斜对角线索引查找。

```cpp
class Solution {
public:
    bool Find(int target, vector<vector<int> > &array) {
        if (array.empty())
            return false;
        int row = 0, col = array[0].size() - 1;
        while (row < array.size() && col >= 0) {
            if (target == array[row][col]) {
                return true;
            } else if (target > array[row][col]) {
                row++;
            } else {
                col--;
            }
        }
        return false;
    }
};
```



## 面试题5：替换空格

统计原字符串和空格的长度，推出新字符串的长度，从尾倒头遍历原字符串，按新字符串的索引插入。



## 面试题6：从尾到头打印链表

遍历链表，将节点值存入栈中，然后再遍历栈，将节点值存入vector中。



## 面试题7：重建二叉树

在先序中找root值（rootVal）首个，在中序中找root位置（rootPos）

递归退出条件：单个节点退出

遍历完成之后没有找到，异常退出

```cpp
  TreeNode *constructHelper(vector<int> &pre, int startPre, int endPre, vector<int> &vin, int startVin, int endVin) {
        int rootValue = pre[startPre];
        TreeNode *root = new TreeNode(rootValue);

        if (pre[startPre] == pre[endPre]) {
            if (vin[startVin] == vin[endVin] && pre[startPre] == vin[startVin])
                return root;
            else
                throw invalid_argument("invalid_argument");
        }

        int rootPos = startVin;
        while (startVin <= endVin && rootValue != vin[rootPos])
            rootPos++;
        if (rootPos == endVin && rootValue != vin[rootPos])
            throw invalid_argument("invalid_argument");

        int leftLength = rootPos - startVin;
        int leftPreEnd = startPre + leftLength;

        if (0 < leftLength)
            root->left = constructHelper(pre, startPre + 1, leftPreEnd, vin, startVin, rootPos - 1);
        if (leftLength < endPre - startPre)
            root->right = constructHelper(pre, leftPreEnd + 1, endPre, vin, rootPos + 1, endVin);

        return root;
    }
```



## 面试题8：二叉树的下一个结点

题目：给定一棵二叉树和其中的一个结点，如何找出中序遍历顺序的下一个结点？

3种情况

1. 存在右节点

   置换当前节点，循环遍历左节点

2. 不存在右节点，是父节点的左节点

   父节点即是

3. 不存在右节点，是父节点的右节点

   置换当前节点，循环遍历父节点，找到父节点是父节点的左节点的节点


```cpp
BinaryTreeNode *GetNext(BinaryTreeNode *pNode) {
    if (!pNode)
        return nullptr;

    BinaryTreeNode *curr = pNode;
    BinaryTreeNode *par = curr->m_pParent;

    if (curr->m_pRight) {
        if (!curr->m_pRight->m_pLeft) {
            return curr->m_pRight;
        } else {
            curr = curr->m_pRight;
            while (curr) {
                if (!curr->m_pLeft)
                    return curr->m_pLeft;
                curr = curr->m_pLeft;
            }
            return curr;
        }
    }

    if (par && curr == par->m_pLeft)
        return par;

    while (par && curr == par->m_pRight) {
        if (par->m_pParent && par == par->m_pParent->m_pLeft)
            return par->m_pParent;
        curr = curr->m_pParent;
        par = par->m_pParent;
    }
    return nullptr;
}
```





## 面试题9：用两个栈实现队列

第一个栈用于push，第二个栈用于pop，第二个栈pop的时候先遍历第一个栈的数据，存到第二个栈中。

```cpp
class Solution {
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        if (stack2.empty())
            throw exception();
        int data = stack2.top();
        stack2.pop();
        return data;
    }
```



## 面试题10：斐波那契数列

跳台阶

变态跳台阶

f(1)=1

f(n) = f(n-1)+f(n-2)+f(n-3)+...+f(1)+1=2^n-1    回溯算法

矩形覆盖

```cpp
class Solution_ {
public:
    int jumpFloorII(int number) {
        int res = 0;
        if (number == 0)
            return 1;

        for (int i = 1; i <= number; i++) {
            res += jumpFloorII(number - i);
        }
        return res;
    }
};
```



## 面试题11：旋转数组的最小数字

保证头（star）大于尾（end），前边后移，后边前移！

特殊情况，当start，mid，end相等的时候，线性查找。minNumInSequence

```cpp
class Solution {
public:
    int minNumberInRotateArray(vector<int> &rotateArray) {
        int res = 0;
        if (rotateArray.empty())
            return res;

        int start = 0;
        int end = rotateArray.size() - 1;
        int mid = start;
        while (rotateArray[start] >= rotateArray[end]) {
            if (end - start == 1)
                return rotateArray[end];
            mid = (start + end) / 2;
            if (rotateArray[start] == rotateArray[end] && rotateArray[start] == rotateArray[mid])
                return minNumInSequence(rotateArray, start, end);
            if (rotateArray[mid] >= rotateArray[start])
                start = mid;
            else if (rotateArray[mid] <= rotateArray[end])
                end = mid;
        }
        return rotateArray[mid];
    }

private:

    int minNumInSequence(vector<int> &rotateArray, int start, int end) {
        int ans = rotateArray[start];
        for (int i = start + 1; i <= end; i++) {
            if (rotateArray[i] < ans)
                ans = rotateArray[i];
        }
        return ans;
    }
};
```



## 面试题15：二进制中1的个数

可以利用while (flag)遍历

```cpp
class Solution1 {
public:
    int NumberOf1(int n) {
        int count = 0;
        unsigned int flag = 1;
        while (flag) {
            if (n & flag)
                count++;
            flag = flag << 1;
        }
        return count;
    }
};
```



## 面试题16：数值的整数次方

二分乘积

return exponent % 2 == 0 ? Power(base * base, exponent / 2) : base * Power(base * base, exponent / 2);

```cpp
class Solution {
public:
    double Power(double base, int exponent) {
        bool isNegative = false;
        if (exponent < 0) {
            isNegative = true;
            base = 1 / base;
            exponent = -exponent;
        }
        double ans = powUtils(base, exponent);
        return ans;
    }

private:
    double powUtils(double base, int exponent) {
        if (exponent == 0)
            return 1;
        return exponent % 2 == 0 ? Power(base * base, exponent / 2) : base * Power(base * base, exponent / 2);
    }
};
```





## 面试题21：调整数组顺序使奇数位于偶数前面

无需保持相对位置，快排两头置换。O(n)

需要保持相对位置，则考虑排序的稳定性，冒泡从后向前置换。O(n^2)



## 面试题22：链表中倒数第k个结点

一次线性复杂度，隔开k个节点。

```cpp
 if (k > i)
            return nullptr;
        else {
            return second->next;
        }
```



## 面试题24：反转链表

```cpp
ListNode *reverseLinklistRecursiveUtils(ListNode *curr, ListNode *prev) {
    if (!curr->next) {
        curr->next = prev;
        return curr;
    }
    ListNode *next = curr->next;
    curr->next = prev;
    return reverseLinklistRecursiveUtils(next, curr);
}

ListNode *reverseLinklistRecursive(ListNode *head) {
    if (!head)
        return nullptr;
    return reverseLinklistRecursiveUtils(head, nullptr);
}

ListNode *reverseLinklistIterative(ListNode *head) {

    ListNode *curr = head;
    ListNode *prev = nullptr, *next = nullptr;
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
```



## 面试题26：树的子结构

遍历tree1检测tree1的各个节点是否含有tree2，如果节点相等了，检查以此节点为根的树是否与tree2一致。



## 面试题27：二叉树的镜像

// 题目：请完成一个函数，输入一个二叉树，该函数输出它的镜像。

交换根节点的左右节点，然后循环遍历。

```
二叉树的镜像定义：源二叉树 
    	    8
    	   /  \
    	  6   10
    	 / \  / \
    	5  7 9 11
    	镜像二叉树
    	    8
    	   /  \
    	  10   6
    	 / \  / \
    	11 9 7  5
```



## 面试题28：对称的二叉树

判断根节点是否相等，然后循环遍历左右节点。

```
isSymmetrical(pRoot1->m_pLeft, pRoot2->m_pRight)
        && isSymmetrical(pRoot1->m_pRight, pRoot2->m_pLeft);
```





## 面试题29：顺时针打印矩阵

按照坐标循环输出

```
r1++;
r2--;
c1++;
c2--;
```



## 面试题30：包含min函数的栈

// 题目：定义栈的数据结构，请在该类型中实现一个能够得到栈的最小元素的min
// 函数。在该栈中，调用min、push及pop的时间复杂度都是O(1)。

利用两个栈维护 stack\<int> stk, minstk;

```
void push(int number) {
        stk.push(number);
        if (minstk.empty() or number <= minstk.top()) {
            minstk.push(number);
        }
    }

    int pop() {
        int top = stk.top();
        stk.pop();
        if (top == minstk.top()) {
            minstk.pop();
        }
        return top;
    }
```



## 面试题31：栈的压入、弹出序列

// 题目：输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是
// 否为该栈的弹出顺序。假设压入栈的所有数字均不相等。例如序列1、2、3、4、
// 5是某栈的压栈序列，序列4、5、3、2、1是该压栈序列对应的一个弹出序列，但
// 4、3、5、1、2就不可能是该压栈序列的弹出序列。

记录push序列和pop序列的长度，利用栈将push序列压入栈中，每压入一个元素，检查栈的top元素与pop序列元素是否相等，如果相等，则将元素pop出栈，接着检查栈的top元素，直到元素全部push完成，最后检查push序列和pop序列的长度是否相等。



## 面试题33：二叉搜索树的后序遍历序列

// 题目：输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。
// 如果是则返回true，否则返回false。假设输入的数组的任意两个数字都互不相同。

以数组形式传值时，所有的参照点为0和长度。（长度）

以vector形式传值时，所有的参照点为start和end。（索引）

```
private:
    bool helper(vector<int> &sequence, int start, int end) {
        if (sequence.empty() || start > end)
            return false;
        int root = sequence[end];
        int i = 0;
        for (; i < end; ++i) {
            if (sequence[start] > root)
                break;
        }
        int j = i;
        for (; j < end; ++j) {
            if (sequence[j] < root)
                return false;
        }
        bool left = true;
        if (i > 0)
            left = helper(sequence, start, i);
        bool right = true;
        if (i < end)
            right = helper(sequence, i + 1, end - 1);
        return (left && right);
    }
```





## 面试题34：二叉树中和为某一值的路径

// 题目：输入一棵二叉树和一个整数，打印出二叉树中结点值的和为输入整数的所
// 有路径。从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。

将存放所有路径paths的vector的地址传入，然后控制path和其对应的currentSum，将满足条件的path存入paths。

注意递归完成之后对于不满足条件的path，和currentSum的控制。



## 面试题35：复杂链表的复制

// 题目：请实现函数ComplexListNode* Clone(ComplexListNode* pHead)，复
// 制一个复杂链表。在复杂链表中，每个结点除了有一个m_pNext指针指向下一个
// 结点外，还有一个m_pSibling 指向链表中的任意结点或者nullptr。

三部曲。。。。。。。



## 面试题36：二叉搜索树与双向链表

// 题目：输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。要求
// 不能创建任何新的结点，只能调整树中结点指针的指向。

采用中序遍历bst，新建辅助节点pLastNodeInList，将其地址传入用来接收当前节点的left节点值。



## 面试题38：字符串的排列

// 题目：输入一个字符串，打印出该字符串中字符的所有排列。例如输入字符串abc，
// 则打印出由字符a、b、c所能排列出来的所有字符串abc、acb、bac、bca、cab和cba。



循环遍历字符串的每一个元素，记录 每一个元素是否visit，根据条件添加。



## 面试题39：数组中出现次数超过一半的数字

// 题目：数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。例
// 如输入一个长度为9的数组{1, 2, 3, 2, 2, 2, 5, 4, 2}。由于数字2在数组中
// 出现了5次，超过数组长度的一半，因此输出2。



如果数组中存在次数超过一半的数字，则其出现的次数比高于其他所有数字出现的次数之和。记录出现数字的次数，如果与前一个相同，则加1，如果不相同 ，则减1，当次数为0了，则从下一个出现的开始统计，最后检查记录次数最多的这个值是否是出现次数超过一半的。



## 面试题40：最小的k个数

// 题目：输入n个整数，找出其中最小的k个数。例如输入4、5、1、6、2、7、3、8
// 这8个数字，则最小的4个数字是1、2、3、4。



先取前k个数构建最大堆，然后依次将后续数字与最大值比较，根据大小插入。O(nlogk)



## 面试题42：连续子数组的最大和

// 题目：输入一个整型数组，数组里有正数也有负数。数组中一个或连续的多个整
// 数组成一个子数组。求所有子数组的和的最大值。要求时间复杂度为O(n)。



分治算法递归求解，递归退出的条件为只有一个元素，即首尾为同一个元素，即索引start等于end，返回索引start对应的值即可。在merge过程中，分别从中间向left，right分别求解最大值，然后合并。





## 面试题52：两个链表的第一个公共结点

// 题目：输入两个链表，找出它们的第一个公共结点。

```
有公共节点，则公共节点之后的部分是相同的，则分别得出两个链表的长度，从相同长度位置开始遍历，出现相同的节点则为第一个公共节点。
```













