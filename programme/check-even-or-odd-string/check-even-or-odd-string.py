# Write a programme to check even or odd string

given_string = input("Input your string : ")

print("\nInput  :", given_string)
print("Output : ", end="")
if (len(given_string) % 2 == 0):
    print("Even String")
else:
    print("Odd String")
