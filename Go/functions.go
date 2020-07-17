package main

import "fmt"

func main(){
	var v1 = f1(5,"four")
	fmt.Println("Argument 1 + length of argument 2 =",v1)

	v2,v3 := f2(7,8)
	fmt.Printf("Return value 1: %d, return value 2: %s\n", v2, v3)

	fmt.Println(f3())
}

// takes 2 parameters of different types and returns int
func f1(v1 int, v2 string) int{
	var output int = v1
	output += len(v2)
	return output
}

// takes 2 parameters of same type and returns 2 different types
func f2(v1,v2 int) (int, string){
	var output int = v1 + v2
	var str string = "five"
	return output, str
}

// defer print statement to end of execution
func f3() int {
	defer fmt.Print("f3 returned value of: ")
	v1 := 0
	if(v1 < 1){
		return 0
	}else{
		return 1
	}
}