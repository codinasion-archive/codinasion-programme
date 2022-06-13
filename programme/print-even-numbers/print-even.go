// Write a programme to print first n even numbers.
package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Println("Enter number: ")
	fmt.Scanln(&n)
	printEven(n)
}

func printEven(n int) {
	var arr []int
	for i := 0; i <= n; i++ {
		arr = append(arr, i*2)
	}
	fmt.Println(arr)
}
