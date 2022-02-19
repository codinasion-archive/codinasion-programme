## Write a Python programme to calculate the average of numbers.

```
Input:  2 3 4
Output: 3
```

---

```python
# Write a Python programme to calculate the average of numbers.
import statistics

n = list(map(int, input("Input: ").split()))
print('Output:', statistics.mean(n))
```
