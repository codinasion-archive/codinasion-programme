// Write a program to print the length of a string

package main

import "fmt"

func lengthOfString(s string) int {
	return len(s)
}

func main() {
	var s string
	fmt.Print("Enter a string : ")
	fmt.Scan(&s)
	fmt.Println("\nLength of string is", lengthOfString(s))
}
