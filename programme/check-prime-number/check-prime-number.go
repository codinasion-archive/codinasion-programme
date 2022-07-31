// Write a programmeto check prime number
package main

import "fmt"

func main() {
	var n int
	fmt.Print("Enter the number : ")
	fmt.Scan(&n)
	fmt.Println("\nThe number is Prime :", isPrime(n))
}

func isPrime(n int) bool {
	for i := 2; i <= n/2; i++ {
		if n%i == 0 {
			return false
		}
	}
	return true
}
