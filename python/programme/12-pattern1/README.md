## Write a Python program to print the given pattern 
```
input : 3
output:     *  *  *
               *  *
                  *
```

```python

# print pattern function
def printPattern(n):
    for i in reversed(range(1,n+1)):
        print((i*" *").rjust(2*n))

        
#test
printPattern(5)
```