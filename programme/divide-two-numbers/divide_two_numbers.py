import sys


def divide_two_numbers(n1: int, n2: int) -> None:
    """Divides two numbers"""
    try:
        print(f'\nOutput : {n1 / n2}')
    except ZeroDivisionError:
        print('\nCannot divide by zero!', file=sys.stderr)
        pass


if __name__ == '__main__':
    ht = {1: 'dividend', 2: 'divisor '}

    n1, n2 = [int(input(f'Input the {ht.get(i)} : ')) for i in range(1, 3)]
    divide_two_numbers(n1, n2)
