#Write a programme to find the sum of n numbers

def sum_of_number(string):
    numbers=list(string.split(" "))
    
    sum=0
    
    for number in numbers:
        sum+=int(number)

    return sum

string="1 2 3 4"
print(sum_of_number(string))