# Write a programme to check prime number

print("Input  : ")
number = parse(Int32, readline())

function checkPrime(num)
    flag = false
    if num == 0 || num == 1
        print("Output : Not prime number\n")
    else
        for i = 2:trunc(Int, num // 2)
            if num % i == 0
                flag = true
                print("Output : Not prime number\n")
            end
        end
        flag == false && print("Output : Prime number\n")
    end
end

checkPrime(number)
