// Write a programme to print first n even numbers
package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Print("Enter number : ")
	fmt.Scanln(&n)
	fmt.Print("\nOutput : ")
	printEven(n)
}

func printEven(n int) {
	for i := 0; i <= n-1; i++ {
		fmt.Print(i*2, " ")
	}
	fmt.Println("")
}
