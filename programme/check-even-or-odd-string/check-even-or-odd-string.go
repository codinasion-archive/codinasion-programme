package main

import (
	"fmt"
)

func main() {
	var str string
	fmt.Println("Enter a string: ")
	fmt.Scan(&str)
	if len(str)%2 == 0 {
		fmt.Println("Even")
	} else {
		fmt.Println("Odd")
	}
}
