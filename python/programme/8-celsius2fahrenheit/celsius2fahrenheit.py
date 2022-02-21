#!/usr/bin/env python3
"""created:02-19-2022 21:55:15, author:seraph★1001100, email:seraph776@gmail.com, project:PROJECTNAME"""


def celsius2fahrenheit(celsius: float) -> float:
    """

    :param celsius: float - temperature in celsius
    :return: float - celsius converted to fahrenheit
    """

    fahrenheit: float = (celsius * 9 / 5) + 32
    return fahrenheit


if __name__ == '__main__':
    main()
