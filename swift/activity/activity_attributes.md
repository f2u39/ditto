# ActivityAttributes

## Declaration

`` protocol ActivityAttributes : Decodable, Encodable ``

## Overview

The ActivityAttributes protocol describes the content that appears in Live Activity. Its inner type ContentState represents the dynamic content of the Live Activity.

``` swift
struct PizzaDeliveryAttributes: ActivityAttributes {
    public typealias PizzaDeliveryStatus = ContentState

    public struct ContentState: Codable, Hashable {
        var driverName: String
        var estimatedDeliveryTime: Date
    }

    var numberOfPizzas: Int
    var totalAmount: String
}
```

## References

- [Apple Developer Documentation - ActivityAttributes](https://developer.apple.com/documentation/activitykit/activityattributes)