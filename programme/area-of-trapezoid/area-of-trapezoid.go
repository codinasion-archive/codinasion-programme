// Write a programmeto compute area of trapezoid
package main

import "fmt"

func main() {
	var a, b, h float64
	fmt.Print("Enter the value of a : ")
	fmt.Scan(&a)
	fmt.Print("Enter the value of b : ")
	fmt.Scan(&b)
	fmt.Print("Enter the value of h : ")
	fmt.Scan(&h)
	fmt.Println("\nThe area of the trapezoid is :", (a+b)*h/2)
}
