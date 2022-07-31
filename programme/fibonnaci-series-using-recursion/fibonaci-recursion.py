# Write a programme to print the Fibonacci series for 'n' numbers

def Fib(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    else:
        return (Fib(n-1)+Fib(n-2))


n = int(input("Input: "))
print('Output: ', end='')
for i in range(n):
    print(Fib(i), end=' ')
