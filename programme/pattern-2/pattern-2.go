// Write a programme to print the given pattern

package main

import (
	"fmt"
	"strconv"
)

func main() {
	var str string

	fmt.Print("Input : ")
	fmt.Scan(&str)

	num, err := strconv.Atoi(str)
	if err != nil || num < 0 {
		fmt.Printf("Input error: %s", str)
		return
	}

	for i := 1; i < num*2; i++ {
		var stars int
		if i <= num {
			stars = i
		} else {
			stars = num*2 - i
		}

		for offset := num - stars; offset > 0; offset-- {
			fmt.Print(" ")
		}
		for ; stars > 0; stars-- {
			fmt.Print("* ")
		}
		fmt.Println()
	}
}
