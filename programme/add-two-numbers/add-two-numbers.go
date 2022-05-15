// Write a programme to add two numbers
package main

import "fmt"

// This function receives two variables of type int
// and then returns an int type
func AddTwoNumbers(x, y int) int {
	return x + y
}

func main() {
	// Declaring x, y and sum variables of type int
	var x int
	var y int
	var sum int

	// Scanln -> to get the input from user
	fmt.Println("Enter the first number:")

	// Here the & is a way to access the previous declared variable
	// Simply speaking, it associate's the input value to the variable
	fmt.Scanln(&x)

	fmt.Println("Enter the second number:")
	fmt.Scanln(&y)

	sum = AddTwoNumbers(x, y)

	// Here the Printf(ormat) is to format the string
	// with the variables values
	// %d is for formatting some types of ints
	fmt.Printf("The sum of %d and %d, is: %d\n", x, y, sum)
}
