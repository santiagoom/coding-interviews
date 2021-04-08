JZ32_45

```
字符串排序

sort(numbers.begin(), numbers.end(), cmp);

static bool cmp(int a, int b) {
    string A = to_string(a) + to_string(b);
    string B = to_string(b) + to_string(a);
    return A < B;
}
```

JZ50

```
while (numbers[i] != i) {
    if (numbers[i] == numbers[numbers[i]]) return numbers[i];
    else swap(numbers[i], numbers[numbers[i]]);
}
某种形式的哈希编码
```

