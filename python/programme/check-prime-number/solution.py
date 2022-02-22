def check_prime(num):
    for i in range(2, num):
        if num % i == 0:
            return "Not prime number"
    return "Prime number"

n = int(input("Input : "))
print("Output :",check_prime(n))
