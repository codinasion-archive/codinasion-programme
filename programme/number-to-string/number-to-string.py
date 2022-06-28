#!/usr/bin/env python3
# Write a program to convert number to strings

def numbers_to_strings(n: int) -> str:
    """Converts numbers to string"""
    d = {0: 'zero', 1: 'one', 2: 'two', 3: 'three', 4: 'four',
         5: 'five', 6: 'six', 7: 'seven', 8: 'eight', 9: 'nine'}
    n = [int(i) for i in str(n)]
    output = ' '.join([d.get(i) for i in n])

    return output


if __name__ == '__main__':
    print(numbers_to_strings(776))  # seven seven six
    print(numbers_to_strings(237))  # two three seven
    print(numbers_to_strings(13))  # one three
