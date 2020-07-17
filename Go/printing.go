package main

import "fmt"

func main(){
	fmt.Println("This","is","println","with","arguments")
	fmt.Print("This","is","print","with","arguments","and","newline\n")
	var v1 int = 5
	fmt.Printf("This is printf with an int variable: %d\n", v1)
	var v2 float64 = 6.3792
	fmt.Printf("This is printf formatting a float to 2 decimal places: %.2f\n", v2)

	//fmt.Scan(&v1)			read console into address of v1
}