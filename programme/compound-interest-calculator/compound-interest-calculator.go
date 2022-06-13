// Write a programme to calculate compound interest

package main

import (
	"fmt"
	"math"
)

func main() {
	var priciple, term, rate float64
	var amount float64
	fmt.Print("Enter the Principle Amount : ")
	fmt.Scan(&priciple)
	fmt.Print("Enter the Term in Years : ")
	fmt.Scan(&term)
	fmt.Print("Enter the Intrest Rate : ")
	fmt.Scan(&rate)

	amount = math.Pow(1+rate/100, term) * priciple
	fmt.Println("\nThe Amount is :", math.Floor(amount*100)/100)

	intrest := amount - priciple
	fmt.Println("The Compound Intrest is :", math.Floor(intrest*100)/100)
}
