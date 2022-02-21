# Write a programme to calculate the average of numbers.
import statistics

n = list(map(int, input("Input: ").split()))
print('Output:', statistics.mean(n))
