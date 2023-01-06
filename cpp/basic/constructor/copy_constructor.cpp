// [Copy Constructor](https://cplusplus.com/doc/tutorial/classes2/#default_constructor)
// A copy constructor is a constructor whose first parameter is of type reference to the class itself (possibly const qualified) and which can be invoked with a single argument of this type.
// If a class has no custom copy nor move constrcutors defined, an implicit copy is provided.

// Console::Console (const Console&);

#include<iostream>

class Console {
    std::string* name;

    public:
        Console(const std::string& name): name(new std::string(name)) {}

        // Copy
        Console(const Console& cs): name(new std::string(cs.content())) {}

        // Access
        const std::string& content() const { return *name; }
};

int main() {
    Console cs0("Xbox");
    Console cs1 = cs0;

    return 0;
};
