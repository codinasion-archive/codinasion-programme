// Write a program to find the factorial of a number
package main

import (
	"fmt"
	"math/big"
)

func main() {
	var n int
	fmt.Print("Enter a number : ")
	fmt.Scan(&n)
	fmt.Println("\nFactorial of", n, "is", factorial(n))
}
func factorial(n int) *big.Int {
	var fact *big.Int = big.NewInt(1)
	for i := 1; i <= n; i++ {
		fact.Mul(fact, big.NewInt(int64(i)))
	}
	return fact
}
