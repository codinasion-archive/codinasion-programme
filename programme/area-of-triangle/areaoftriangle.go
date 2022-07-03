// Write a programme to find area of triangle.
package main

import (
	"fmt"
	"math"
)

func areaOfTriangle(a, b, c, s float64) float64 {
	return math.Sqrt(s * (s - a) * (s - b) * (s - c))
}

func roundFloat(val float64, precision uint) float64 {
	var ratio float64 = math.Pow(10, float64(precision))
	return math.Round(val*ratio) / ratio
}

func main() {
	var a, b, c, s, area float64

	fmt.Print("a : ")
	fmt.Scan(&a)

	fmt.Print("b : ")
	fmt.Scan(&b)

	fmt.Print("c : ")
	fmt.Scan(&c)

	s = (a + b + c) / 2
	fmt.Print("\ns : ", s)

	area = areaOfTriangle(a, b, c, s)
	fmt.Println("\n\narea : ", roundFloat(area, 2))
}
