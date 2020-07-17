package main

import "fmt"

func main(){
	// create new int array of size 3
	s1 := make([]int, 3)
	s1[0] = 4
	s1[1] = 5
	s1[2] = 6
	fmt.Println(s1)
	fmt.Println("Length of s1:",len(s1))

	// append new values to s1
	s1 = append(s1, 7, 8, 9)
	fmt.Println(s1)

	// print sub-slices
	fmt.Println("1:4",s1[1:4])
	fmt.Println("2:",s1[2:])
	fmt.Println(":3",s1[:3])

	// create new slices and disentangle
	s2 := []int {1, 2, 3}
	// if s3 := s2, changing one affects the other
	s3 := make([]int, len(s2))
	copy(s3, s2)
	fmt.Println(s2,s3)
	s2[0] = 9
	fmt.Println(s2,s3)
}