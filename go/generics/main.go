package main

import (
	"fmt"

	"golang.org/x/exp/constraints"
)

func main() {
	fmt.Println("min(3,5) =", min(3, 5))

}

func min(x, y int) int {
	if x < y {
		return x
	}
	return y
}

func Min[T constraints.Ordered](x, y T) T {
	if x < y {
		return x
	}
	return y
}
