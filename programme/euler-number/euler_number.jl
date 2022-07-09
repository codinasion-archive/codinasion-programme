# write a programme to compute the Euler Number

function euler(n)
    values = 1
    for i in [1:1:n;]

        value = (1 / factorial(big(i)))
        value = Float64(value, RoundUp)
        values += value
    end

    return round(values, digits=3)
end

n = 50
println("Input  : ", n)
println("Output : ", euler(n))
