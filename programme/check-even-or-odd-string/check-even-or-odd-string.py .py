# Write a programme to check even or odd string

def odd_even_string(string):
    if len(string) % 2 == 0:
        return "Even String"
    return "Odd String"


given_string = input("Input your string : ")

print("\nInput  :", given_string)
print("Output :", odd_even_string(given_string))
