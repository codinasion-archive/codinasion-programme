// Write a program to check palindrome number
package main

import "fmt"

func reverseInt(n int) int {
	var remainder, reverse int
	for n > 0 {
		remainder = n % 10
		reverse = reverse*10 + remainder
		n /= 10
	}
	return reverse
}

func isPalindrome(n int) bool {
	if n < 0 {
		return false
	}
	if n < 10 {
		return true
	}
	return reverseInt(n) == n
}

func main() {
	var n int

	fmt.Print("Input  : ")
	fmt.Scan(&n)

	if isPalindrome(n) {
		fmt.Println("Output : Palindrome number")
	} else {
		fmt.Println("Output : Not palindrome number")
	}
}
