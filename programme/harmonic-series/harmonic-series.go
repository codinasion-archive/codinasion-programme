package main

import (
	"fmt"
	"math/big"
)

func harmonicSeries(n int) *big.Int {
	var harmonic *big.Int = big.NewInt(0)
	var harmonic1 *big.Int = big.NewInt(1)
	var harmonic2 *big.Int = big.NewInt(1)
	for i := 0; i < n; i++ {
		harmonic.Add(harmonic, harmonic1)
		harmonic1.Add(harmonic1, harmonic2)
		harmonic2.Set(harmonic1)
	}
	return harmonic
}

func main() {
	var n int
	fmt.Println("Enter a number: ")
	fmt.Scan(&n)
	fmt.Println("Harmonic series of", n, "is", harmonicSeries(n))
}
