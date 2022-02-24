## Write a program to print the minimum of given numbers

```
Input: 2 4 1 16 6
Output: 1
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
# Taking input and making a list
n = list(map(int, input("Input: ").split()))

# Printing the minimum value
print(min(n))
```
