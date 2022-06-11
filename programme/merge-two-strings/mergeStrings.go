// Write a programme to merge two strings

package main

import "fmt"

func main() {
	var str1, str2 string

	fmt.Print("Enter String 1 : ")
	if _, err := fmt.Scan(&str1); err != nil {
		panic("Scan Error str1")
	}

	fmt.Print("Enter String 2 : ")
	if _, err := fmt.Scan(&str2); err != nil {
		panic("Scan Error str2")
	}

	mergedString := str1 + str2

	fmt.Printf("Output: %s\n", mergedString)
}
