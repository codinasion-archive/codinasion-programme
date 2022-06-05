# Write a programme to calculate the sum of following
# harmonic series for a given value of n

n = int(input('Input  : '))

print(f'Output : {sum(1/i for i in range(1, n+1)):.5f}')
