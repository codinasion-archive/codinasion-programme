# Write a programme to convert the temperature from Celsius to Fahrenheit

using Printf

print("Input  : ")
tempC = parse(Float32, readline())
tempF = (tempC * 1.8) + 32

@printf("Output : %0.2f", tempF)
