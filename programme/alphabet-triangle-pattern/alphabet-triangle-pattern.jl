# WAP to get the alphabet triangle pattern


function makePattern(num)
    print("Output : ")

    for i in 1:num
       c= 65
       
       # Creates the spaces before the letters
       println("") 
        for k in num-1:-1:i
        print(" ") 
    end
        
        # Fills up letters 
        for j in 1:(2*i - 1)
            
            if j < i
                print(Char(c))
                c += 1
            else
                print(Char(c))
                c -= 1
            end
        end        
    end        
end

print("Input : ")
len = parse(Int32, readline())


makePattern(len)