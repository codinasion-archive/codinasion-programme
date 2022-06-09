package main

import "fmt"

func main() {
	var n int
	var sum float64
	fmt.Print("Enter the number of numbers : ")
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		var num float64
		fmt.Print("Enter the number : ")
		fmt.Scan(&num)
		sum += num
	}
	fmt.Println("\nThe average of the numbers is :", sum/float64(n))
}
