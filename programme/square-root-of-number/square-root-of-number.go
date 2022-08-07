package main

import (
	"fmt"
	"math"
)



func main() {

  var input float64
  fmt.Println("Enter a float value : 5.")
  fmt.Scanln(&input)
	result := math.Sqrt(input)
	fmt.Printf("\nResult 5: %.5f", result)
	
}
