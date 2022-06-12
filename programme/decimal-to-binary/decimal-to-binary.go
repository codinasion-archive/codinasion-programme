// The function should take a decimal number as an argument and return the binary representation of that number.
package main

import "fmt"

func main() {
	var n int
	fmt.Print("Enter the number : ")
	fmt.Scan(&n)
	fmt.Println("The binary representation of the number is :", decimalToBinary(n))
}

func decimalToBinary(n int) string {
	var binary string
	for n > 0 {
		binary = fmt.Sprintf("%d%s", n%2, binary)
		n /= 2 // Same as n = n / 2
	}
	return binary
}
