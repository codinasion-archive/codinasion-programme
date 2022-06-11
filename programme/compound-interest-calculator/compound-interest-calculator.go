package main

import (
	"fmt"
	"math"
)

func main() {
	var priciple, term, rate float64
	var amount float64
	fmt.Println("Enter the Principle Amount:")
	fmt.Scan(&priciple)
	fmt.Println("Enter the Term in Years:")
	fmt.Scan(&term)
	fmt.Println("Enter the Intrest Rate:")
	fmt.Scan(&rate)
	amount = math.Pow(1+rate/100, term) * priciple
	fmt.Println("The amount is:", amount)
	intrest := amount - priciple
	fmt.Println("The Compound Intrest is:", intrest)
}
