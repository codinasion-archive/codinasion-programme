package main

import (
	"fmt"
	"math/big"
)

func main() {
	var degree float64
	fmt.Println("Enter a degree: ")
	fmt.Scan(&degree)
	fmt.Println("Radian of", degree, "is", degree*(math.Pi/180))
}
