package main

import "fmt"

func main() {
	var year int
	fmt.Println("Enter a year:")
	fmt.Scan(&year)
	if year%4 == 0 {
		if year%100 == 0 {
			if year%400 == 0 {
				fmt.Println("The year is a leap year.")
			} else {
				fmt.Println("The year is not a leap year.")
			}
		} else {
			fmt.Println("The year is a leap year.")
		}
	} else {
		fmt.Println("The year is not a leap year.")
	}
}
