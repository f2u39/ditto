#include <iostream>
#include "ditto.h"

using namespace std;

Ditto_& Ditto() {
    static Ditto_ obj;
    obj.id = 132;
    obj.name = "Ditto";
    return obj;
};

void Ditto_::Say_hi(string sth) {
    cout << "Hi~ and " << sth << endl;
}