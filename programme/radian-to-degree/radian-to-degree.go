// Write a programme to convert radian to degree
package main

import (
	"fmt"
	"math"
)

func main() {
	var radian float64
	fmt.Print("Enter a radian : ")
	fmt.Scan(&radian)
	fmt.Println("\nDegree of", radian, "radian is", math.Round(radian*180/math.Pi))
}
