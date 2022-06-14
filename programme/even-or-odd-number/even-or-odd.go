// Write a programme to check a number even or odd

package main

import (
	"fmt"
	"strconv"
)

func main() {
	var str string

	fmt.Print("Input Number : ")
	fmt.Scan(&str)

	num, err := strconv.Atoi(str)
	if err != nil {
		fmt.Printf("Input error: %s", str)
		return
	}

	var evenOrOdd string
	if num%2 == 0 {
		evenOrOdd = "Even"
	} else {
		evenOrOdd = "Odd"
	}

	fmt.Printf("\nOutput : %s Number\n", evenOrOdd)
}
