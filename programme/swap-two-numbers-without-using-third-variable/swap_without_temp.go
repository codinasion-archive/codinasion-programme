// Write a program to swap two numbers without using third variable
package main

import "fmt"

func swap(a, b int) (int, int) {
	return b, a
}

func main() {
	var a, b int

	fmt.Print("Enter the first number a  : ")
	fmt.Scan(&a)

	fmt.Print("Enter the second number b : ")
	fmt.Scan(&b)

	fmt.Printf("\nInput  : a=%d b=%d", a, b)

	a, b = swap(a, b)
	fmt.Printf("\nOutput : a=%d b=%d\n", a, b)
}
