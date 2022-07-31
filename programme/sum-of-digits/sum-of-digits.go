// Write a programme to print sum of digits
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

	var sum, d int
	for num != 0 {
		d = num % 10
		sum = sum + d
		num = num / 10
	}
	fmt.Printf("\nSum of the digits : %d\n", sum)
}
