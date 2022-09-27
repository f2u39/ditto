# Memory Safety

By default, Swift prevents unsafe behavior from happening in your code. For example:

- Variables are initialized before they're used.
- Memory isn't accessed after it's been deallocated.
- Array indices are checked for out-of-bounds errors.
- Multiple accesses to the same area of memory don't conflict.

Swift manages memory automatically, most of the time don't have to think about accessing memory at all.

## Unders Conflicting Access to Memory

A conflicting access to memory can occur when different parts of your code are trying to access the same memory at the same time.

## References

- [The Swift Programming Language - Memory Safety](https://docs.swift.org/swift-book/LanguageGuide/MemorySafety.html)
