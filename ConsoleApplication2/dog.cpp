#include "dog.h"
#include <iostream>
#include "Animal.h"
using namespace std;

namespace Animal {
    class dog : public Animal::Dog {
    public:
        dog();
        void gav();
    };
}
