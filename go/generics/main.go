package main

import (
	"fmt"

	"golang.org/x/exp/constraints"
)

func main() {
	fmt.Println("min(3, 5) =", min(3, 5))
	fmt.Println("Min(3.1, 3.9) =", Min(3.1, 3.9))
	// fmt.Println("Min(3, 5.7) =", Min(3, 5.7))	default type float64 of 5.7 does not match inferred type int for T
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
