package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main(){
	// create unique random seed
	rand.Seed(time.Now().UnixNano())
	// random int from 0 - 99
	var v1 = rand.Intn(100)
	fmt.Println(v1)
}