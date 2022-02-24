## Write a program to print sum of square of n natural number

```
Input: 3
Output: 14
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
# Input
n = int(input('Input : '))

# Finding sum of square
total = [x**2 for x in range(1,n+1)]

# Output
print('Output: ',sum(total))
```
