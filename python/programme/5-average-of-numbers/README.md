## Write a Python program to find average of numbers

```
Input:  2 3 4
Output: 3
```

---

```python
# average of numbers
#importing statistics module
import statistics

#test
#taking input and making a list
n = list(map(int, input("Input: ").split()))
#printing output
print('Output:', statistics.mean(n))
```
