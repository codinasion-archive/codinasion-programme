# Write a programmeto check prime number

def check_prime(num):
    if (num == 0 or num == 1):
        return "Not prime number"
    for i in range(2, num//2+1):
        if num % i == 0:
            return "Not prime number"
    return "Prime number"


n = int(input("Input : "))
print("Output :", check_prime(n))
