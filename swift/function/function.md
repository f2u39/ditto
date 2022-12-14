# Function

## Nested Function

``` swift
func outer() {
    // code

    func inner() {
        // code
    }
}
```

## Defining a function

``` swift
func greet(name: String) -> String {
    return "Hello " + name + "!"
}
```

``` go
// compare to Go
func greet(name string) string {
    return "Hello " + name + "!" 
}
```

### Function with multiple return values

``` swift
func minMax(array: [Int]) -> (min: int, max: Int) {
    var currentMin = array[0]
    var currentMax = array[0]
    for value in array[1..<array.count] {
        if value < currentMin {
            currentMin = value
        } else if value > currentMax {
            currentMax = value
        }
    }
    return (currentMin, currentMax)
}
```

## References

- [The Swift Programming Language - Functions](https://docs.swift.org/swift-book/LanguageGuide/Functions.html)
