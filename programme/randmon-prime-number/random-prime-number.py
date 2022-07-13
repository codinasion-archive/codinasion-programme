# Write a programme to generate a random prime number in range n1-n2

import random


def is_prime(n):
    for i in range(2, n):
        if (n % i) == 0:
            return False
    return True


def random_prime_number(number1, number2):
    random_number = random.randint(number1, number2)

    while not is_prime(random_number):
        random_number = random.randint(number1, number2)
    return random_number


range_start = 0
range_end = 100
print("Start range :", range_start)
print("End   range :", range_end)
print("\nRandom prime number :", random_prime_number(range_start, range_end))
