# Print Square Pattern

Write a Python programme to print the given pattern.

```
Input: 3
```

```
x x x
x   x
x x x

```
```
Input: 5
```

```
x x x x x
x       x
x       x
x       x
x x x x x

```




## Python

```python
#!/usr/bin/env python3

def print_pattern(n: int) -> None:
    """Prints a square outline pattern"""
    for col in range(n):
        for row in range(n):
            if col == 0 or col == n - 1 or row == 0 or row == n - 1:
                print(' * ', end='')
            else:
                print('   ', end='')
        print()
```
