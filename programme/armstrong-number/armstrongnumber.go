// Write a programmeto check armstrong number
package main

import "fmt"

func countDigits(number int) int {
	var numberOfDigits int = 0
	for number > 0 {
		number /= 10
		numberOfDigits++
	}
	return numberOfDigits
}

// math.Pow only accepts float64 inputs and returns a float64 number
// Therefore, we write our own Integer Power function
func intPow(base, exponent int) int {
	if exponent == 0 {
		return 1
	}
	var result int = base
	for i := 2; i <= exponent; i++ {
		result *= base
	}
	return result
}

func requiredSum(number int) int {
	var numberOfDigits int = countDigits(number)
	var sum int = 0
	for number > 0 {
		var digit int = number % 10
		number /= 10
		sum += intPow(digit, numberOfDigits)
	}
	return sum
}

func isArmstrong(number int) bool {
	return number == requiredSum(number)
}

func main() {
	var num int
	fmt.Print("Enter an integer: ")
	fmt.Scan(&num)
	fmt.Println("\nInput  :", num)
	if isArmstrong(num) {
		fmt.Println("Output : armstrong number")
	} else {
		fmt.Println("Output : not an armstrong number")
	}
}
