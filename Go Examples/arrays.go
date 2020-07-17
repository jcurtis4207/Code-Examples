package main

import "fmt"

func main(){
	// manual array creation
	var a1[3] int
	a1[0] = 1
	a1[1] = 2
	a1[2] = 3
	fmt.Println(a1)

	// instant array creation
	a2 := [3]int{5, 6, 7}
	fmt.Println(a2)
	size := len(a2)
	fmt.Println("Array 2 is length:", size)

	// iterate over array with range
	a3 := [5]string{"a","b","c","d","e"}
	for i,c := range a3{
		fmt.Printf("CharAt(%d) = %s\n", i, c)
	}

	// 2d array creation
	var m1[3][3] int
	m1[0][0] = 6
	m1[1][0] = 7
	m1[2][0] = 8
	fmt.Println(m1)
}