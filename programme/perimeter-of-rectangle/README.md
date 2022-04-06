## Write a Python programme to find perimeter of rectangle

Perimeter of rectangle = 2 * ( ` length ` + ` breadth ` )

```
length  : 12
breadth : 2

perimeter : 28
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
length = int(input("length  : "))
breadth = int(input("breadth : "))

print(f"\nperimeter : {2*(length + breadth)}")
```
