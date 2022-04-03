## Write a programme to convert minutes to seconds.

```
Input  : 1
Output : 60
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
def minutes_to_second(minutes: int) -> int:
    """converts minutes to seconds"""
    return minutes * 60


if __name__ == '__main__':
    print(minutes_to_second(1))  # 60
    print(minutes_to_second(5))  # 60
    print(minutes_to_second(10))  # 60
```
