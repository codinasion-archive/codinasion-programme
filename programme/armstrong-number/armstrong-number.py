# Write a programmeto check if the number is an Armstrong number or not

# Get input
num = input("Input  : ")

length = len(num)
number = int(num)

sum = 0

temp = number
while temp > 0:
    digit = temp % 10
    sum += digit ** length
    temp //= 10

# Display the output
output = "armstrong number" if number == sum else "not a armstrong number"
print("Output :", output)
