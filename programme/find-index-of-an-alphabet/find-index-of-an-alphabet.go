package main

import (
	"fmt"
	"strings"
)

func main() {
	var str []string = []string{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"}
	var letter string
	fmt.Println("Enter a letter: ")
	letter = "A"
	letter = strings.ToLower(letter)
	for i := 0; i < 26; i++ {
		if letter == str[i] {
			fmt.Println("The letter", letter, "is", i+1)
		}
	}
}
