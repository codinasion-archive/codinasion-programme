## Write a program to print the reverse of a number

```
Input: 1234
Output: 4321
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
# Input
n = int(input('Input : '))

# Reversing the number using string slicing
reversed = int(str(n)[::-1])

# Output
print('Output: ',reversed)
```
