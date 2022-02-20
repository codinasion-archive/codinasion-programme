## Write a Python program to print the reverse of a number

```
Input: 1234
Output: 4321
```

---

```python
#Reverse of a number
#Input
n = int(input('Input : '))
#Reversing the number using string slicing
reversed = int(str(n)[::-1])
#Output
print('Output: ',reversed)
```