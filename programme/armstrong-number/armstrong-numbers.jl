# Checking Armstrong Numbers

print("Input : ")
num = parse(Int32,readline())

exponent = length(num)
temp = num
val = 0

while temp > 0
    number = temp % 10
    global val += number ^ exponent
    global temp = fld(temp,10)
end

println("Output :", num == val ? "armstrong number" : "not an armstrong number" )
