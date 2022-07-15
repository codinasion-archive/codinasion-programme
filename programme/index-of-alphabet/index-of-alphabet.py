# Write a programme to find index of an alphabet

def index_of_alphabet(letter):
    alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
                'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
    letter = letter.lower()
    return alphabet.index(letter)+1


print("Input  :", 'a')
print("Output :", index_of_alphabet('a'))
