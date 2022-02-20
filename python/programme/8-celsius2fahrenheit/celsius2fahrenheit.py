#!/usr/bin/env python3
"""created:02-19-2022 21:55:15, author:seraph★1001100, email:seraph776@gmail.com, project:PROJECTNAME"""

import unittest


def celsius2fahrenheit(celsius: float) -> float:
    """

    :param celsius: float - temperature in celsius
    :return: float - celsius converted to fahrenheit
    """

    fahrenheit: float = (celsius * 9 / 5) + 32
    return fahrenheit


class TestSolution(unittest.TestCase):
    """Tests Celsius-to-Fahrenheit function"""

    def setUp(self) -> None:
        self.positive_numbers = [32.0, 33.8, 35.6, 37.4, 39.2, 41.0, 42.8, 44.6, 46.4, 48.2, 50.0]
        self.negative_numbers = [32.0, 30.2, 28.4, 26.6, 24.8, 23.0, 21.2, 19.4, 17.6, 15.8, 14.0]

    def test_positive_numbers(self):
        """Test temperature ranges from zero to positive-10"""
        for i in range(11):
            self.assertEqual(celsius2fahrenheit(i), self.positive_numbers[i])

    def test_negative_numbers(self):
        """Test temperature ranges from zero through negative-10"""
        for i in range(11):
            self.assertEqual(celsius2fahrenheit(-i), self.negative_numbers[i])


if __name__ == '__main__':
    unittest.main()
