#Write a programme to check even or odd string

def odd_even_string(string):
    if len(string)%2 == 0:
        return "Even String"
    return "Odd String"

string1 = "hiithere"
string2 = "hii"

print(odd_even_string(string1))#Even
print(odd_even_string(string2))#Odd