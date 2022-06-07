package main

import "fmt"

//area of `square`
func main() {
	var a float64
	fmt.Print("Enter the value of a: ")
	fmt.Scan(&a)
	fmt.Println("The area of the square is: ", a*a)
}
