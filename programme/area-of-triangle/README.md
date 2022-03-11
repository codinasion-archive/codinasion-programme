## Write a programme to find area of triangle

```
a : 10
b : 17
c : 21

s : 24

area : 84
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
a = float(input('Enter the length of first side  : '))
b = float(input('Enter the length of second side : '))
c = float(input('Enter the length of third side  : '))

s = (a + b + c) / 2

# calculate and output area
area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
print('\nThe area of the triangle is %0.2f' % area)

```
