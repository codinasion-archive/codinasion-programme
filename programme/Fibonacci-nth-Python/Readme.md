## Write a program to print Fibonacci series.

```
Input: 10
Output: 0 1 1 2 3 5 8 13 21 34
```

---

```python
a = 0
b = 1
i = 0
n = int(input("Input: "))
while (i!=n):
    print(a,end=" ")
    temp = a
    a = b
    b = temp + b
    i+=1

```