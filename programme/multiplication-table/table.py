# Write a program to output the following multiplication table

def table_of(n):
    for i in range(1, 11): # get first 10 result
        print(f"{n} x {i} = {n*i}")


n = int(input("Enter number: "))

table_of(n) 
