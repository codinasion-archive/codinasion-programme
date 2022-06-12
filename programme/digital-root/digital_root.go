// digital root is the sum of the digits of a number.
package main

import "fmt"

func main() {
	var n int
	fmt.Print("Enter the number : ")
	fmt.Scan(&n)
	fmt.Println("The digital root of the number is :", digitalRoot(n))
}

func digitalRoot(n int) int {
	for n > 9 {
		n = sumOfDigits(n)
	}
	return n
}

func sumOfDigits(n int) int {
	var sum int
	for n > 0 {
		sum += n % 10
		n /= 10
	}
	return sum
}
