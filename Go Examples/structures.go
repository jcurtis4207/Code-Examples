package main

import "fmt"

type thing struct{
	age int
	name string
}

// method without pointer can only access and return values
func (t thing) f1() int{
	return t.age + 10
}

// method with pointer can modify values
func (t *thing) f2(){
	t.age += 10
}

func main(){
	thing1 := thing{age:28, name:"Jacob"}
	thing2 := thing{30, "Thomas"}
	fmt.Println(thing1, thing2)
	fmt.Println(thing2.age, thing2.name)

	fmt.Println("Return thing1.age + 10:",thing1.f1())
	fmt.Println("Modify thing2.age")
	thing2.f2()
	fmt.Println("thing2 new age:",thing2.age)
}