## Write a Python program to print sum of square of n natural number

```
Input: 3
Output: 14
```

---

```python
#Input
n = int(input('Input : '))
#Finding sum of square
total = [x**2 for x in range(1,n+1)]
#Output
print('Output: ',sum(total))
```
