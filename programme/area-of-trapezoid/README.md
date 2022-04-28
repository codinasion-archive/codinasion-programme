## Write a program to compute the area of a trapezoid

```
Base 1: 5
Base 2: 10
Height: 7

Area: 52.5
```

---

<CodeBlock slots="heading, code" repeat="3" languages="Python, Java, C, C++" />

#### Python

```python
# Computes the area of a trapezoid

base1 = int(input('Base 1: '))
base2 = int(input('Base 2: '))
height = int(input('Height: '))

area = (base1 + base2)*height*0.5
print('\nArea:',area)
```
