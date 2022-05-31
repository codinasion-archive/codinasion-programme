
def isPangram(_input):
    alphabet = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
    pangram = 1
    letters = {}
    #convert _input to lower case
    _input = _input.lower()

    #iterate for each character in input
    for c in _input:
        letters[c] = 1
    
    #iterate for each character in alphabet
    #and checks if each one is in letters
    for c in alphabet:
        #if not in letters then set pangram to 0 (false)
        if c not in letters:
            pangram = 0
    
    return pangram

#ask for input
print('input: ')
_input = input()

if isPangram(_input):
    print('pangram!')
else:
    print('not pangram!')