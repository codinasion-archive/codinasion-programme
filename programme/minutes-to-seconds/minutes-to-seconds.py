#!/usr/bin/env python3
"""
created: 2022-03-25 20:50:18
@author: seraphLXXVI
"""


def minutes_to_second(minutes:int) -> int:
    """converts minutes to seconds"""
    return minutes * 60


if __name__ == '__main__':
    print(minutes_to_second(1))  # 60
    print(minutes_to_second(5))  # 60
    print(minutes_to_second(10))  # 60
