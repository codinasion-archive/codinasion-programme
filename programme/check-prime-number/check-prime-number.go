package main

import "fmt"

func main() {
	var number int
	fmt.Println("Enter a number:")
	fmt.Scan(&number)
	if number%2 == 0 {
		fmt.Println("The number is not a prime number.")
	} else {
		fmt.Println("The number is a prime number.")
	}
}
