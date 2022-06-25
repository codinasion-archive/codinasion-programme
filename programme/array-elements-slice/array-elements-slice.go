// Write a program to generate new array within given range (start, end) sliced from orignal array

package main

import (
	"fmt"
)

func main() {
	list := []string{"abcd", "efgh", "ijklmn", "opq", "rstuvw", "xyz"}
	var start int = 2
	var end int = 3

	fmt.Printf("Orignal List: ")
	fmt.Println(list)

/*
        1. "range x" will return index, value pair or iterable entity 'x'
        2. expression "variable_name[x:y]" returns a list of element within range having  index >= x and index < y
*/
	for index, value := range list {
		list [index] = value [start-1 : end]
	}
	fmt.Printf("Modified List: ")
	fmt.Println(list)
}