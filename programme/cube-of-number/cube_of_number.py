#!/usr/bin/env python3
# Write a programme to find cube of a number


def cube_of_number() -> None:
    """Returns the cube of a number"""
    n = int(input("Input  : "))
    print("Output :", pow(n, 3))


if __name__ == '__main__':
    cube_of_number()
