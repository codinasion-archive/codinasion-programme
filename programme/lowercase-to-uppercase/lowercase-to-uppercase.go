//Programme to convert lowercase string to uppercase in Go
package main

import (
    "fmt"
    "strings"
)
  
func main() {
   input := "hii there"
   output := strings.ToUpper(input)
   fmt.Println("Output :", output)
}
