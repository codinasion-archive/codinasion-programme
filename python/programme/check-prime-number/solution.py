def check_prime(num):
    if (n == 0 or n == 1):
        return "Not prime number"
    for i in range(2, num//2+1):
        if num % i == 0:
            return "Not prime number"
    return "Prime number"

n = int(input("Input : "))
print("Output :",check_prime(n))
