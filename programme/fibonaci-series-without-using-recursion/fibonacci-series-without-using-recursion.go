package main

import (
	"fmt"
	"math/big"
)

func fibonacciSeriesWithoutRecusion(n int) *big.Int {
	var a, b, c *big.Int
	a = big.NewInt(0)
	b = big.NewInt(1)
	for i := 0; i < n; i++ {
		c = a.Add(a, b)
		a = b
		b = c
	}
	return c
}

func main() {
	var n int
	fmt.Println("Enter a number: ")
	fmt.Scan(&n)
	fmt.Println("Fibonacci series of", n, "is", fibonacciSeriesWithoutRecusion(n))
}
