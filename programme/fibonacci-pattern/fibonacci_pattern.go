/* Write a programmeto print Fibonacci pattern using recursion

Example:
Input: n = 5
Output:
1
1 1
1 1 2
1 1 2 3
1 1 2 3 5
*/

package main

import (
	"fmt"
	"strconv"
)

func fibonacci(n int) int {
	if n <= 1 {
		return n
	}
	return fibonacci(n-1) + fibonacci(n-2)
}

func main() {
	var n int
	fmt.Print("Enter an integer : ")
	fmt.Scan(&n)

	for i := 1; i <= n; i++ {
		for j := 1; j <= i; j++ {
			fmt.Print(strconv.Itoa(fibonacci(j)) + " ")
		}
		fmt.Println()
	}
}
