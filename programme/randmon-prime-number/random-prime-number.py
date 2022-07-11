##Write a programme generate random prime number

import random

def is_prime(n):
  for i in range(2,n):
    if (n%i) == 0:
      return False
  return True

def random_prime_number(number1,number2):
    random_number = random.randint(number1,number2)
    
    while not is_prime(random_number):
        random_number = random.randint(number1,number2)
    return random_number

number1=0
number2=100
print(random_prime_number(number1,number2))