# Write a programme to count capital letters in a string

def capital_letter_string(string):
    capital_letter = 0

    for letter in string:
        if letter.isupper():
            capital_letter += 1

    return capital_letter


string = "HeLlo WorlD"  # Capital letter = 4
print("Input  :", string)
print("Output :", capital_letter_string(string))
