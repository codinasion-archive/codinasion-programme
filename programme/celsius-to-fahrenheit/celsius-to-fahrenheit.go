package main

import (
	"fmt"
)

func main() {
	var celsius float64
	fmt.Println("Enter a temperature in Celsius:")
	fmt.Scan(&celsius)
	fahrenheit := celsius*9/5 + 32
	fmt.Println("Fahrenheit temparature is:", fahrenheit)
}
