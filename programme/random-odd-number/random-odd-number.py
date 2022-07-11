#Write a programme to generate random odd number

import random

def random_odd_number(number1,number2):
    random_number = random.randint(number1,number2)
    
    while random_number%2 == 0:
        random_number = random.randint(number1,number2)
    return random_number

number1=0
number2=100
print(random_odd_number(number1,number2))