#include <iostream>
// Should not use using namespace std

class Console {
    public:
        int id;
        void set_id(int pid) { id = pid; }
};

class Switch {
    public:
        int price;
        Switch(int p) : price(p) {};
};

class Xbox {
    std::string model;

    public:
        Xbox(const std::string& mdl) : model(mdl) {}
        Xbox(){}
        const std::string& mmodel() const { return model; }
};

int main() {
    Console cs;

    Switch sw(298000);  // OK
    // Switch sw;       // Not valid

    Xbox xbox0;
    Xbox xbox1("Xbox Series X");

    return 0;
}