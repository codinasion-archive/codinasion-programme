## Write a Python program to get the factorial of a number.

```
Input:  5
Output: 120
```

---

```python
# recursive factorial function
def factorial(n):
    if n == 1 or n == 0:
        return 1
    else:
        return n*factorial(n-1)

n = int(input("Input:"))
print("Output: ", factorial(n))
```
