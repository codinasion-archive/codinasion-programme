## Write a Python program to print the given pattern 
```
input : 3
output:     * 
           * * 
          * * * 
           * * 
            * 
        
```

```python

# print pattern function

def printPattern(n): 
    # print the top half of the pattern
    for i in range(1,n+1):
        print((i*"* ").rjust(n+i))
    # print the last half of the pattern
    for i in reversed(range(1,n)):
        print((i*"* ").rjust(n+i))
        

#test
printPattern(5)
```