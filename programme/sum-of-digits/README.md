## Write a program to print sum of digits.

```
Input:  2332
Output: 10
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
# Input number
n = int(input("Enter the number: "))

# find sum
sum_digits = 0
while n > 0:
    rem = n % 10
    sum_digits += rem
    n = n // 10

print(sum_digits)
```
