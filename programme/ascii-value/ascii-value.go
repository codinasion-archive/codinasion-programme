// Write a programme to print ASCII Value of a character

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter Any Character to find ASCII : ")
	ch, _ := reader.ReadByte()
	fmt.Printf("\nThe ASCII value of '%c' : %d\n", ch, ch)
}
