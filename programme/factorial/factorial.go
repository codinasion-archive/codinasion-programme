package main

import (
	"fmt"
	"math/big"
)

func main() {
	var n int
	fmt.Println("Enter a number: ")
	fmt.Scan(&n)
	fmt.Println("Factorial of", n, "is", factorial(n))
}
func factorial(n int) *big.Int {
	var fact *big.Int = big.NewInt(1)
	for i := 1; i <= n; i++ {
		fact.Mul(fact, big.NewInt(int64(i)))
	}
	return fact
}
