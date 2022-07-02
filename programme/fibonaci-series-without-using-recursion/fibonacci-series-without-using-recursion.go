// Write a program to print Fibonacci series without using recursion
package main

import (
	"fmt"
	"math/big"
)

func fibonacciSeriesWithoutRecusion(n int) *big.Int {
	var a, b, c *big.Int
	a = big.NewInt(0)
	b = big.NewInt(1)
	c = big.NewInt(0)
	fmt.Print(a, " ")
	fmt.Print(b, " ")
	for i := 0; i < n-2; i++ {
		c = a.Add(a, b)
		a = b
		b = c
		fmt.Print(c, " ")
	}
	fmt.Println("")
	return c
}

func main() {
	var n int
	fmt.Print("Enter a number : ")
	fmt.Scan(&n)
	fmt.Print("\nOutput : ")
	fibonacciSeriesWithoutRecusion(n)
}
