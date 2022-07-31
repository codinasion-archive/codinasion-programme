// Write a programme to convert number to strings
package main

import (
	"fmt"
	"regexp"
)

var NumStrList = []string{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}

func main() {
	var str string

	fmt.Print("Input Number : ")
	fmt.Scan(&str)

	isNum, err := regexp.MatchString("^\\d+$", str)
	if err != nil || !isNum {
		fmt.Printf("Input error: %s", str)
		return
	}

	fmt.Print("\nOutput : ")
	for i := 0; i < len(str); i++ {
		fmt.Printf("%s ", NumStrList[str[i]-48]) // ascii code 48 -> 0
	}
	fmt.Println()
}
