// Write a programme to find sum of cubes of first n natural numbers.

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
	if err != nil {
		fmt.Printf("Input error: %s", str)
		return
	}

	var total int
	for i := 1; i <= num; i++ {
		total += i * i * i
	}
	fmt.Printf("Output : %d\n", total)
}
