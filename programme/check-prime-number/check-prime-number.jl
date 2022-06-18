# WAP to check if the number is prime

using Primes

print("Input : ")
num =  parse(Int32, readline())

print("Output :" ,isprime(num) ? "Prime number" : "Not a Prime number")
