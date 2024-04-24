package main

import "fmt"

func main() {
	var s string
	r := 0
	fmt.Scan(&s)
	for _, c := range s {
		if c == '1' {
			r++
		}
	}
	fmt.Printf("%v", r)
}
