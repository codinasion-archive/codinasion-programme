## Write a program to find average of numbers

```
Input:  2 3 4
Output: 3
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
# importing statistics module
import statistics

# taking input and making a list
n = list(map(int, input("Input: ").split()))

# printing output
print('Output:', statistics.mean(n))
```
