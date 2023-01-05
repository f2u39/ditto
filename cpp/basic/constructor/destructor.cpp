#include <iostream>

// [Destructor](https://cplusplus.com/doc/tutorial/classes2/#default_constructor)
// Destructors fulfill the opposite functionality of constructors: 
// They are responsible for the necessary cleanup needed by a class when its lifetime ends. 

class Console {
    std::string* name;

    public:
        Console(): name(new std::string) {}
        Console(const std::string& nm): name(new std::string(nm)) {}
        ~Console() { delete name; }
        const std::string& name() const { return *name; }
};

int main() {
    Console cs0;
    Console cs1("Xbox");

    return 0;
};