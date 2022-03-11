## Write a programme to check leap year

```
Input  : 2020
Output : Leap Year
```
```
Input  : 2021
Output : Not a Leap Year
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
year = int(input("Input  : "))

print("Output : ", end="")

if year % 100 == 0:
    if year % 400 == 0:
        print("Leap Year")
    else:
        print("Not a Leap Year")
else:
    if year % 4 == 0:
        print("Leap Year")
    else:
        print("Not a Leap Year")
```

