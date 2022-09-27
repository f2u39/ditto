# Generics

Generics are a way of writing code that is independent of the specific types being uesd.

## Type Parameters

``` go
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
```

## References

- [An Introduction To Generics](https://go.dev/blog/intro-generics)