package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	total := 0
	for i := 0; i < n; i++ {
		var tmp int
		fmt.Scan(&tmp)
		total |= tmp
	}

	half := total >> 1
	res := 0
	for total == half<<1 {
		res++
		total = half
		half = total >> 1
	}

	fmt.Printf("%v", res)
}
