# Write a programme to calculate compound interest.
# Input from User
p = int(input("Enter Principle Amount : "))
t = int(input("Enter Time Period : "))
r = int(input("Enter Rate of Interest : "))

# output
print('Amount : ', (round((p*((1+(r/100))**t)), 2)))
print('Compound Interest : ', (round((p*((1+(r/100))**t)) - p, 2)))
