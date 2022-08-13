package main

import "fmt"

func main() {
    var a, b, c, d int
    
    fmt.Println("Enter 4 integers separated with space")
    fmt.Scanf("%d %d %d %d", &a, &b, &c, &d)
    fmt.Println(a+b+c+d)
}
