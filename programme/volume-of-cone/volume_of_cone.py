#!/usr/bin/env python3
# Write a programme to find volume of cone
from math import pi


def volume_of_cone() -> None:
    """Returns the volume of a cone"""
    ht = {0: 'radius', 1: 'height'}
    radius, height = [int(input(f"Input  {ht.get(i)}: ")) for i in range(2)]
    print("Output :", f'{1 / 3 * pi * pow(radius, 2) * height:.5f}')


if __name__ == '__main__':
    volume_of_cone()
