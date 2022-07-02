// Write a programme to find negative of a number
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

	if num > 0 {
		num = -num
	}

	fmt.Printf("\nOutput: %d\n", num)
}
