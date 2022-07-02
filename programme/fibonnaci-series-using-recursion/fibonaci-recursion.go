// Write a program to print fibonacci series using recursion
package main

import (
	"fmt"
	"strconv"
)

func fib(n int) int {
	switch n {
	case 0, 1:
		return n
	default:
		return fib(n-1) + fib(n-2)
	}
}

func main() {
	var str string

	fmt.Print("Input Number : ")
	fmt.Scan(&str)

	num, err := strconv.Atoi(str)
	if err != nil || num < 0 {
		fmt.Printf("Input error: %s", str)
		return
	}

	fmt.Print("\nOutput : ")
	for i := 0; i < num; i++ {
		fmt.Printf("%d ", fib(i))
	}
	fmt.Print("\n")
}
