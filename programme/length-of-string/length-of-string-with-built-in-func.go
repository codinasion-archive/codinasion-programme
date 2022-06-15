package main

import "fmt"

func lengthOfString(s string) int {
	return len(s)
}

func main() {
	var s string
	fmt.Println("Enter a string: ")
	fmt.Scan(&s)
	fmt.Println("Length of string is", lengthOfString(s))
}
