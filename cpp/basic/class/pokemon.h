#ifndef Pokemon_h
#define Pokemon_h

#include <iostream>

using namespace std;

class Pokemon_ {    
    public:
        int id;
        string name;

        Pokemon_(void);
        int Get_id();
        string Get_name();
        void Say_hi();
        
};

Pokemon_& Pokemon();

#endif // Pokemon_h