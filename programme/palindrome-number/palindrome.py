# Write a program to check palindrome number
def checkPalindrome(a):
    pal = n = 0
    original = a
    while a > 0:
        n = a % 10
        pal = pal*10 + n
        a = a//10

    if original == pal:
        return "Palindrome number"
    return "Not palindrome number"


num = int(input("Input  : "))
print("Output :", checkPalindrome(num))
