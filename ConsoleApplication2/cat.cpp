#include "cat.h"
#include <iostream>

using namespace std;

namespace Animal {
    class cat : public AnimalBase {
    public:
        cat();
        void meow();
    };
} 
