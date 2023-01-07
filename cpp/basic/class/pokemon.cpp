#include <iostream>
#include "pokemon.h"

using namespace std;

Pokemon_& Pokemon() {
    static Pokemon_ obj;
    return obj;
};

int Pokemon_::Get_id() {
    return id;
}

string Pokemon_::Get_name() {
    return name;
}

void Pokemon_::Say_hi() {
    cout << "Hi~ I'm " << name << endl;
}