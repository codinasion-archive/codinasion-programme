## Write a Python program to convert number to strings.

```
Input:  51
Output: five one
```

---

```python
# num to str function
def tostring(n):
    arr = ['zero ', 'one ', 'two ', 'three ', 'four ',
           'five ', 'six ', 'seven ', 'eight ', 'nine ']
    ans = ""
    if(n == 0):
        return arr[n]
    while(n):
        ans = arr[n % 10] + ans
        n = int(n/10)

    return ans

# test
print(tostring(24578676000))
```
