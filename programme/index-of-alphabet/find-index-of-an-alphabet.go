// Write a programme to find index of an alphabet
package main

import (
	"fmt"
	"strings"
)

func main() {
	var str []string = []string{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"}
	var letter string

	letter = "A"
	fmt.Println("Input  :", letter)
	letter = strings.ToLower(letter)
	for i := 0; i < 26; i++ {
		if letter == str[i] {
			fmt.Println("Output :", i+1)
		}
	}
}
