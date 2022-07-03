// Write a programme to convert hours to seconds
package main

import "fmt"

func main() {
	fmt.Print("Insert the (integer) number of hours you want to convert into seconds: ")
	var hours int
	fmt.Scan(&hours)
	var seconds int = hours * 3600
	fmt.Println("Hrs :", hours)
	fmt.Println("Sec :", seconds)
}
