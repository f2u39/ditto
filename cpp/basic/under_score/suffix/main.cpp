#include <iostream>

class Console {
    std::string name_;

    public:
        std::string name() const { return name_; }
        void name(std::string name) { name_ = name; }
};