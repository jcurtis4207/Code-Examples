package main

import "fmt"

func main(){
	// for loop
	for i := 0; i < 5; i++{
		fmt.Println(i)
	}

	// while loop
	j := 0
	for j < 4{
		fmt.Print(j," ")
		j++
	}
	fmt.Print("\n")

	// iterate over array with range
	array := [5]string{"a","b","c","d","e"}
	for i,c := range array{
		fmt.Printf("CharAt(%d) = %s\n", i, c)
	}
}