// Write a programmeto output the multiplication table
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

	for i := 1; i <= 10; i++ {
		fmt.Printf("%d * %d = %d\n", num, i, num*i)
	}
}
