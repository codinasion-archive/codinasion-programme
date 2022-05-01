# Write a program to check if the number is an Armstrong number or not

# Get input
number = int(input("Input  : "))

sum = 0

temp = number
while temp > 0:
    digit = temp % 10
    sum += digit ** 3
    temp //= 10

# Display the output
output = "armstrong number" if number == sum else "not a armstrong number"
print("Output :", output)
