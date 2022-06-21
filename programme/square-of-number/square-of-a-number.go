// Write a programme to find the square of a number

package main

import (
	"fmt"
	"strconv"
)

func main() {
	var str string

	fmt.Print("Input  : ")
	fmt.Scan(&str)

	num, err := strconv.Atoi(str)
	if err != nil {
		fmt.Printf("Input error: %s", str)
		return
	}

	fmt.Printf("Output : %d\n", num*num)
}
