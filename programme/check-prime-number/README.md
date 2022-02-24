## Write a program to check prime number

```
Input  : 7
Output : Prime number
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
# check prime number function
def check_prime(num):
    if (num == 0 or num == 1):
        return "Not prime number"
    for i in range(2, num//2+1):
        if num % i == 0:
            return "Not prime number"
    return "Prime number"

# programme driver
n = int(input("Input : "))
print("Output :", check_prime(n))
```
