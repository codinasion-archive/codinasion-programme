# Write a programme to check Pangram sentence

input_string = input('Input:  ')

input_string = str.lower(input_string)

alphabets = set({})

for i in input_string:
    if 'a' <= i <= 'z':
        alphabets.add(i)

if len(alphabets) == 26:
    print('Output: Pangram Sentence')
else:
    print('Output: Not a pangram sentence')
