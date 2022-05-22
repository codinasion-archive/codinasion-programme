package main

import (
	"fmt"
)

func createTrianglePattern() {

	var rows int
	fmt.Print("Enter the number of rows: ")
	fmt.Scan(&rows)

	for i := 0; i < rows; i++ {
		asciiLetter := 65
		for j := 0; j < i+1; j++ {
			fmt.Printf("%c ", asciiLetter)
			asciiLetter += 1
		}
		fmt.Println()
	}
}

func main() {
	createTrianglePattern()
}
