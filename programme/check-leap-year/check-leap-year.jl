# Write a programme to check leap year

print("Input  : ")

year = parse(Float32, readline())

if year % 100 == 0
    if year % 400 == 0
        print("Output : Leap Year")
    else
        print("Output : Not a Leap Year")

    end

else
    if year % 4 == 0
        print("Output : Leap Year")

    else
        print("Output : Not a Leap Year")

    end
end
