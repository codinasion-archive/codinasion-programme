## Write a Python program to print a Fibonacci pattern.

```
input: 5
output:
1
1 1
1 1 2
1 1 2 3
1 1 2 3 5
```

---

```python
#Write a program that prints a pattern of fibonacci numbers, up to the input quantity.

def main():
    quantity = int(input(""))
    """Types the fibonacci numbers up to the given quantity"""
    if quantity > 0:
        i = 1
        first = 1
        second = 1
        total = 1
        string = "1"
        print(string)
        while i < quantity:
            string += ' ' + str(total)
            total = first + second
            first = second
            second = total
            print(string)
            i += 1
        

main()
```