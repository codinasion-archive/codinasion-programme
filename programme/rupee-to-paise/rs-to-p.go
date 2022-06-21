// Write a program to rupee to paise

package main

import (
	"fmt"
	"strconv"
)

func main() {
	var str string

	fmt.Print("Rupee : ")
	fmt.Scan(&str)

	num, err := strconv.ParseFloat(str, 64)
	if err != nil {
		fmt.Printf("Input error: %s", str)
		return
	}

	fmt.Printf("Paise : %s\n", strconv.FormatFloat(num*100, 'f', -1, 64))
}
