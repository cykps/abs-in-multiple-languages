package main

import "fmt"

func main() {
	var n, a, b int
	fmt.Scan(&n, &a, &b)

	r := 0
	for i := 0; i <= n; i++ {
		s := i/10000%10 + i/1000%10 + i/100%10 + i/10%10 + i%10
		if a <= s && s <= b {
			r += i
		}
	}

	fmt.Print(r)
}
