# Array element slice function

array_list = ['abcd', 'efgh', 'ijklmn','opq','rstuvw','xyz']
print(array_list)

# function arguments (arrayList) (start slice from -number) (end slice with -number)
def arrayLetterRange(a_list, start=5, end=1):

    # store slice value in result
    result = []
    for i in a_list:
        sliced_val = i[start-1: end]

        # check slice value if not empty 
        if i != '':
            result.append(sliced_val)

    return result


# call the function
array_result = arrayLetterRange(array_list, 2,3)
print(array_result)