# Write a programme to generate new array with sliced elements of old array

# define array
array_list = ['abcd', 'efgh', 'ijklmn', 'opq', 'rstuvw', 'xyz']
print("Array :", array_list)

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


# define range
range_start = 2
range_end = 3
print("Start :", range_start)
print("End   :", range_end)
print()

# call the function
array_result = arrayLetterRange(array_list, range_start, range_end)
print("Sliced Array :", array_result)
