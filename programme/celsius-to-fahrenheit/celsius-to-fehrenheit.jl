#WAP to convert celsius to fahrenheit

using Printf

print("Input : ")
tempC =  parse(Float32, readline())
tempF = (tempC * 1.8 ) + 32

@printf("Output : %0.2f", tempF)