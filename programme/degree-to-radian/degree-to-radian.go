// Write a programme to convert degree to radian
package main

import (
	"fmt"
	"math"
)

func main() {
	var degree float64
	fmt.Print("Enter a degree : ")
	fmt.Scan(&degree)
	fmt.Println("Radian of", degree, "degree is", math.Round((degree*(math.Pi/180))*100000)/100000)
}
