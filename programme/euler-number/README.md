## Write a programme to compute the value of Euler's Number

```
1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
from math import factorial

def e(n):
    return sum((1 / factorial(i) for i in range(1, n + 1)))
```
