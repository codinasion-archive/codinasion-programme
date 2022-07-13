package main

import (
	"fmt"
)

func main() {
	var str string
	fmt.Println("Enter a string: ")
	fmt.Scan(&str)
	fmt.Println("Number of capital letters in the string is: ", countCapitalLetters(str))
}

func countCapitalLetters(str string) int {
	var count int
	for _, char := range str {
		if char >= 'A' && char <= 'Z' {
			count++
		}
	}
	return count
}
