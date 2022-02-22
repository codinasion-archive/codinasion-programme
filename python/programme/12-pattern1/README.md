## Write a Python program to print the given pattern 
```
input : 3
output:     *  *  *
               *  *
                  *
```

```python

# print pattern function
def printPattern(n,i=0,pattern=[]):
    if n>0:
        data = [' ' for j in range(i)]+ ['*' for i in range(n) ]
        pattern.append(data)
        #build the pattern recursively
        printPattern(n-1,i+1)
    else:
        # print the pattern
        print(tabulate(pattern,tablefmt='plain'))
        pattern.clear()
        
#test
printPattern(5)
```