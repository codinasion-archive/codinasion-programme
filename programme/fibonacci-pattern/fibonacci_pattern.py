def fibonacci_pattern(n: int) -> int:
    assert n > 0
    a, b = 0, 1
    for i in range(n):
        print(f"{b} ", end="")
        a, b = b, a + b
    print(end="\n")


if __name__ == "__main__":
    pattern_lenght = int(input(
        "Enter the lenght of the Fibonacci pattern to generate: "))
    for number in range(1, pattern_lenght + 1):
        fibonacci_pattern(number)
