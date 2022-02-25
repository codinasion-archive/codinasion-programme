## Write a Python programme to calculate compound interest.

```
Enter P : 100
Enter T : 10
Enter R : 10

Amount : 259.37
Compound Interest : 159.37
```

---

<CodeBlock slots="heading, code" repeat="1" languages="C" />

#### Python
```Python
# Input from User
p = int(input("Enter Principle Amount: "))
t = int(input("Enter Time Period: "))
r = int(input("Enter Rate of Interest: "))

# output
print ('Compound Interest: ', (round((p*((1+(r/100))**t)) - p,2)))
```
