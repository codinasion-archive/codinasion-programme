# Write a program to check palindrome number
def check_palindrome(n: int) -> str:
    """Checks if n is a palindrome"""
    if str(n) == str(n)[::-1]:
        return 'Palindrome Number'
    return 'Not Palindrome Number'


num = int(input('Input  : '))
print('\nOutput :', check_palindrome(num))
