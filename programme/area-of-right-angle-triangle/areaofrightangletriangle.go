// Write a programme to find area of right angle triangle

package main

import (
	"fmt"
	"math"
)

func areaOfRightAngleTriangle(base, height float64) float64 {
	return 0.5 * base * height
}

func roundFloat(val float64, precision uint) float64 {
	var ratio float64 = math.Pow(10, float64(precision))
	return math.Round(val*ratio) / ratio
}

func main() {
	var base, height, area float64

	fmt.Print("base : ")
	fmt.Scan(&base)

	fmt.Print("height : ")
	fmt.Scan(&height)

	area = areaOfRightAngleTriangle(base, height)
	fmt.Print("\narea : ", roundFloat(area, 2))
}
