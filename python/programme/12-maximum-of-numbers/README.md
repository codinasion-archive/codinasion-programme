## Write a Python program to print the maximum of given numbers

```
Input: 2 4 1 16 6
Output: 16
```

---

```python
#Taking in input and making a list
n = list(map(int, input("Input: ").split()))
#Printing the maximum value
print(max(n))
```