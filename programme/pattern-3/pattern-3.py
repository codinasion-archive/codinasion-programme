# Write a Python programme to print the given pattern

def print_pattern(n: int) -> None:
    print("Output : \n")
    for col in range(n):
        for row in range(n):
            if col == 0 or col == n - 1 or row == 0 or row == n - 1:
                print(' * ', end='')
            else:
                print('   ', end='')
        print()


n = int(input("input  : "))
print_pattern(n)
