# State

A property wrapper type that can read and write a value managed by SwiftUI.

## Overview

SwiftUI manages the storage of a property that you decalre as state. When the value changes, SwiftUI will update the parts of the view that depend on the value. A state instance isn't the value itself, it's a means of reading and writing the value.

``` swift
@State private var isPlaying: Bool = false
```

## Binding?

If you pass a state property to a child view, SwiftUI will update the child any time when the value changes in the parent, but the child can't modify the value. To make the child view to modify the stored value, use Binding instead.

``` swift
@Binding var isPlaying: Bool
```

## Reference

- [Apple Developer Documentation - State](https://developer.apple.com/documentation/swiftui/state)
