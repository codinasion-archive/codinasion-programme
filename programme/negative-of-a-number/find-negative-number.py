# find the negative number of a number
# quick def (9 = -9 and -9 = 9 and string = not a number but "90" is a number)



# number = "-890"
number = 232.34

def findNegativeNum(num):
    if type(num) == int or type(num) == float:
        negative = num - (num*2)
        return negative
    else:
        # try to convert string into number if possible ("9") != number
        try:
            num = int(num)
            negative = num - (num*2)
            return negative
        except:
            return "number conversion error\nNot a Number"



result = findNegativeNum(number)
print (result)
