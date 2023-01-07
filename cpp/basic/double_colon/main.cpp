#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Console {
    public:
        void print() { cout << "Console" << endl; }
        void print2();
};

class Switch: public Console {
    public:
        void print() { cout << "Switch" << endl; }
};

void Console::print2() {
    cout << "Console2" << endl;
}

int main() {
    Console cs0;
    cs0.print();
    
    Switch sw0;
    sw0.print();
    
    // ==========
    
    Console cs1;
    cs1.print2();

    return 0;
};