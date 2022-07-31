// Write a programme to print alphabet triangle pattern

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
		for k := rows; k > i; k-- {
			fmt.Print(" ")
		}
		for j := 0; j < 2*i+1; j++ {
			if j <= i {
				fmt.Printf("%c", asciiLetter)
				asciiLetter += 1
			} else {
				asciiLetter -= 1
				fmt.Printf("%c", asciiLetter-1)
			}
		}
		fmt.Println()
	}
}

func main() {
	createTrianglePattern()
}
