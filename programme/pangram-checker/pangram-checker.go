// Write a programme to check Pangram sentence
package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	fmt.Print("Input  : ")
	sc := bufio.NewScanner(os.Stdin) // Scanner can read line with space.

	if sc.Scan() {
		str := strings.ToLower(sc.Text())

		charMap := make(map[string]struct{})

		for i := 0; i < len(str); i++ {
			if 97 <= str[i] && str[i] <= 122 { // 97 == 'a', 122 == 'z' (ascii code)
				charMap[string(str[i])] = struct{}{}
			}
		}

		if len(charMap) == 26 {
			fmt.Println("Output : Pangram Sentence")
		} else {
			fmt.Println("Output : Not a Pangram Sentence")
		}
	}
}
