package main

import "fmt"

func main(){
	// create new map : [key]value
	m1 := make(map[string]int)
	m1["Jacob"] = 28
	m1["Thomas"] = 30
	fmt.Println(m1)
	fmt.Println("Value for Jacob:",m1["Jacob"])
	fmt.Println("Length of m1:", len(m1))
	delete(m1, "Jacob")
	fmt.Println("Deleted Jacob")
	_,exists := m1["Jacob"]
	fmt.Println("(T/F) Jacob is still in the map:", exists)

	// create new map
	m2 := map[string]int {"Bill":35, "Ben":40, "Max":45}

	// iterate over map with range
	for k,v := range m2{
		fmt.Println("Key:",k,"Value:",v)
	}
}