// Write a programmeto convert the temperature from Celsius to Fahrenheit
package main

import (
	"fmt"
)

func main() {
	var celsius float64
	fmt.Print("Enter a temperature in Celsius : ")
	fmt.Scan(&celsius)
	fahrenheit := celsius*9/5 + 32
	fmt.Println("\nFahrenheit temparature is :", fahrenheit)
}
