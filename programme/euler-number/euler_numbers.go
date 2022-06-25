// Write a GO programme to compute the value of Euler's Number.

package main

import (
	"fmt"
)

func factorial (n uint64) uint64 {
	// returns the factorial of a given number
	var factorial_num uint64 = 1
	var i uint64
	for i = 1 ; i <= n ; i++ {
		factorial_num *= i
	}
	return factorial_num
}

func main() {
	var n uint64
	var i uint64
	var float_value_at_i float64
	var euiler_number float64 = 1
	fmt.Printf("Enter Value of N: ")
	fmt.Scan(&n)

	for i = 1 ; i<= n ; i++ {
		float_value_at_i = 1.0 / float64(factorial(i))
		euiler_number += float_value_at_i
	}
	fmt.Printf("The Euler number is: ")
	fmt.Println(euiler_number)
}
