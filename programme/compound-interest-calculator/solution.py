# Input from User
p = int(input("Enter Principle Amount: "))
t = int(input("Enter Time Period: "))
r = int(input("Enter Rate of Interest: "))

# output
print ('Compound Interest: ', (round((p*((1+(r/100))**t)) - p,2)))
