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

