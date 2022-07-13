// Write a programme to check even or odd string
package main

import (
	"fmt"
)

func main() {
	var str string
	fmt.Print("Enter a string : ")
	fmt.Scan(&str)
	fmt.Printf("\nOutput : ")
	if len(str)%2 == 0 {
		fmt.Println("Even string")
	} else {
		fmt.Println("Odd string")
	}
}
