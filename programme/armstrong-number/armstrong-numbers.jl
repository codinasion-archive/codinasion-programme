# Write a programmeto check armstrong number

print("Input  : ")
num = parse(Int32, readline())

exponent = length(string(num))
temp = num
val = 0

while temp > 0
    number = temp % 10
    global val += number^exponent
    global temp = fld(temp, 10)
end

println("Output : ", num == val ? "Armstrong number" : "Not an armstrong number")
