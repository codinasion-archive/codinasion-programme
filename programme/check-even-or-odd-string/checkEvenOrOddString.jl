# Write a programme to check even or odd string

function lettersCounter(input)

    if (length(input)) % 2 == 0
        println("Even String")
    else
        println("Odd String")
    end
end

input = "Hello"
println("Input  : ", input)
print("Output : ")
lettersCounter(input)
