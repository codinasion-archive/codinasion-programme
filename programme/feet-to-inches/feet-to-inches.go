// Write a program to convert feet to inches

package main

import "fmt"

func feetToInches(feet float32) float32 {
	return feet * 12.0
}

func main() {
	fmt.Print("Input  : ")

	var feet float32
	fmt.Scan(&feet)

	fmt.Println("Output :", feetToInches(feet))
}
