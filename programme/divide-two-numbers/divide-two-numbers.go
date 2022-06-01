// Write a program to divide two numbers

package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	var a float64
	var b float64

	fmt.Print("Insert the first number  : ")
	fmt.Scanln(&a)

	fmt.Print("Insert the second number : ")
	fmt.Scanln(&b)

	result, err := divideTwoNumbers(a, b)
	if err != nil {
		log.Fatal(err)
	}
	fmt.Fprintf(os.Stdout, "\nThe division between %v and %v is : %v\n", a, b, result)
}

func divideTwoNumbers(a, b float64) (float64, error) {
	return a / b, nil
}
