// Write a program to convert inches to feet

package main

import "fmt"

func inchesToFeet(inches float32) float32 {
	return inches / 12.0
}

func main() {
	fmt.Print("Input  : ")

	var inches float32
	fmt.Scan(&inches)

	fmt.Println("Output :", inchesToFeet(inches))
}
