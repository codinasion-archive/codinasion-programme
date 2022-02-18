#number to string 
def tostring(n):
    if(n==0):
        return "0"
    ans=""
    while(n):
        x = n%10
        n = int(n/10)
        ans = chr(x+48) + ans
    return ans

print(tostring(24578676000))