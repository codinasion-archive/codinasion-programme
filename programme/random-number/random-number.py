#Write a programme to generate random numbers

import random

def random_number(number1,number2):
    return random.randint(number1,number2)

number1 = 0
number2 = 100

print(random_number(number1,number2))