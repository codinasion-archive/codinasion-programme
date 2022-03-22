# Hours to seconds converter program
# Input the hours from the user
hours = int(input("How many hours do you want to convert into seconds: "))
# Convert the number in hours to seconds (convert the variable to integer because input gets input as string by default)
seconds = int(hours) * 3600

# Print the result
# If function just to correct the grammar. If it is less than 1 hour, keep it singular, else turn into plural.
if hours <= 1:
    # Using f string to insert the variables
    print(f"{hours} hour is equal to {seconds} seconds!")
else:
    print(f"{hours} hours is equal to {seconds} seconds!")
