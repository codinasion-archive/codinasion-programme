package main

import (
	"fmt"
	"math"
)

func main() {
	var radian float64
	fmt.Println("Enter a radian: ")
	fmt.Scan(&radian)
	fmt.Println("Degree of", radian, "is", math.Round(radian*180/math.Pi))
}
