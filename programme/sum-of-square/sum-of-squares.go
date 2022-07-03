// Write a program to print sum of square of n natural number
package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	var numberInput int

	fmt.Print("Enter the number : ")
	fmt.Scanln(&numberInput)

	squareOfNumberInput, err := sumOfSquares(numberInput)
	if err != nil {
		log.Fatal(err)
	}

	fmt.Fprintf(os.Stdout, "\nThe sum of the squares of %d is: %d\n", numberInput, squareOfNumberInput)
}

func sumOfSquares(number int) (int, error) {
	var result int
	for i := 1; i <= number; i++ {
		result += i * i
	}
	return result, nil
}
