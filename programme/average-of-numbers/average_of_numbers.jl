using Statistics 
using Printf

print("Input : ")

num = split(readline())

nums = parse.(Int32, num)

@printf("Output : %0.2f", mean(nums))