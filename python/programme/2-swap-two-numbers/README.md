## Write a Python program to swap two numbers without using third variable.

```
Input:  a=10 b=20
Output: a=20 b=10
```

---

```python
#swapping two numbers program 
def swap(a,b):
    return b,a
```

<br />

#### Alternative approach

```python
# define variables
a = 10
b = 20

# swap numbers
a,b = b,a

# print result
print(a, b)
```
