## Write a program to compute the area of a rhombus

```
Diagonal 1 : 6
Diagonal 2 : 8

Area : 24
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
diagonal1 = int(input('Diagonal 1 : '))
diagonal2 = int(input('Diagonal 2 : '))

area = diagonal1 * diagonal2 * 0.5
print('\nArea : ', area)
```
