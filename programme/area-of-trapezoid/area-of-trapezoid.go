package main

import "fmt"

//area of `trapezoid`
func main() {
	var a, b, h float64
	fmt.Print("Enter the value of a: ")
	fmt.Scan(&a)
	fmt.Print("Enter the value of b: ")
	fmt.Scan(&b)
	fmt.Print("Enter the value of h: ")
	fmt.Scan(&h)
	fmt.Println("The area of the trapezoid is: ", (a+b)*h/2)
}
