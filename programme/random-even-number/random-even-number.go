package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {


	rand.Seed(time.Now().UnixNano())
	var x1 = rand.Intn(100)
	for x1 % 2 != 0{
	    
	    x1 = rand.Intn(100)
	    
	}
	
	fmt.Println(x1)
	
}
