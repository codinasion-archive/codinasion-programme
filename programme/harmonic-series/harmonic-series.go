package main

import "fmt"

func main() {
	var n int
	fmt.Print("Enter the number : ")
	fmt.Scan(&n)
	fmt.Println("The harmonic series is :", harmonicSeries(n))
}

func harmonicSeries(n int) float64 {
	var sum float64
	for i := 1; i <= n; i++ {
		sum += float64(1) / float64(i)
	}
	return sum
}
