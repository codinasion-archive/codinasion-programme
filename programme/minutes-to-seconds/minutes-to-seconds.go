// Write a programme to convert minutes to seconds

package main

import (
	"fmt"
	"strconv"
)

func main() {
	var str string

	fmt.Print("Input Minutes : ")
	fmt.Scan(&str)

	min, err := strconv.Atoi(str)
	if err != nil || min < 0 {
		fmt.Printf("Input error: %s", str)
		return
	}

	fmt.Printf("\n%d seconds\n", min*60)
}