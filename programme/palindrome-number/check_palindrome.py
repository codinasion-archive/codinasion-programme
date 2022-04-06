def check_palindrome(n: int) -> str:
    """Checks if n is a palindrome"""
    if str(n) == str(n)[::-1]:
        return 'Palindrome Number\n'
    return 'Not Palindrome Number\n'


num = int(input('Input : '))
print(check_palindrome(num))
