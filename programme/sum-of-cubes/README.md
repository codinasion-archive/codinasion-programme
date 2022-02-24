## Write a programme to find sum of cubes of first n natural numbers.

```
Input: 4
Output: 100
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
#Input
n = int(input('Input : '))

#Reversing the number using string slicing
sumofcubes = sum([x*x*x for x in [*range(1, n+1)]])

#Output
print('Output: ', sumofcubes)
```
