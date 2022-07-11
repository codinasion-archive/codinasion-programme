##Write a programme to find the index of an alphabet letter

def index_of_alphabet(letter):
    alphabet=[ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'] 
    letter=letter.lower()
    return alphabet.index(letter)+1

print(index_of_alphabet("C"))