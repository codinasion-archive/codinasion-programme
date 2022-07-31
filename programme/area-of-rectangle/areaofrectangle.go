// Write a programme to compute the area of a rectangle

package main

import (
	"fmt"
	"math"
)

func areaOfRectangle(length, breadth float64) float64 {
	return length * breadth
}

func roundFloat(val float64, precision uint) float64 {
	var ratio float64 = math.Pow(10, float64(precision))
	return math.Round(val*ratio) / ratio
}

func main() {
	var length, breadth, area float64

	fmt.Print("length  : ")
	fmt.Scan(&length)

	fmt.Print("breadth : ")
	fmt.Scan(&breadth)

	area = areaOfRectangle(length, breadth)
	fmt.Println("\narea : ", roundFloat(area, 2))
}
