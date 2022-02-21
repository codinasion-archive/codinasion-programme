## Write a Python program to print the minimum of given numbers

```
Input: 2 4 1 16 6
Output: 2
```

---

```python
#Taking in input and making a list
n = list(map(int, input("Input: ").split()))
#Printing the minimum value
print(min(n))
```