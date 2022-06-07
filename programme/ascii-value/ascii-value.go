package main

import "fmt"

// ascii value of `character`
func main() {
	var c rune
	fmt.Print("Enter the value of a character: ")
	fmt.Scan(&c)
	fmt.Println("The ascii value of the character is: ", int(c))
}
