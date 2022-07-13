# Write a programme to generate a random odd number in range n1-n2

import random


def random_odd_number(number1, number2):
    random_number = random.randint(number1, number2)

    while random_number % 2 == 0:
        random_number = random.randint(number1, number2)
    return random_number


range_start = 0
range_end = 100
print("Start range :", range_start)
print("End   range :", range_end)
print("\nRandom odd number :", random_odd_number(range_start, range_end))
