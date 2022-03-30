# Minutes to Seconds

Write a Python programme to convert minutes to seconds.

```
Input: 1
Output: 60
```

## Python

```python
#!/usr/bin/env python3

def minutes_to_second(minutes:int) -> int:
    """converts minutes to seconds"""
    return minutes * 60


if __name__ == '__main__':
    print(minutes_to_second(1))  # 60
    print(minutes_to_second(5))  # 300
    print(minutes_to_second(10))  # 600

```
