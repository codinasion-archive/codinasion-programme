// Write a programme to compute the area of a rhombus
package main

import (
	"fmt"
)

func main() {
	var a, b float64
	fmt.Print("Enter the value of a : ")
	fmt.Scan(&a)
	fmt.Print("Enter the value of b : ")
	fmt.Scan(&b)
	fmt.Println("\nThe area of the rhombus is :", a*b/2)
}
