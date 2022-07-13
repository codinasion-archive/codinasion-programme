# Write a programme to generate a random number in range n1, n2

import random


def random_number(number1, number2):
    return random.randint(number1, number2)


range_start = 0
range_end = 100
print("Start range :", range_start)
print("End   range :", range_end)
print("\nRandom number :", random_number(range_start, range_end))
