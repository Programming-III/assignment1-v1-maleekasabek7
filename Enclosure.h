#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 

#include <iostream>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
using namespace std;

class Enclosure{
    private:
    int *arrayofAnimal;
    int capacity;
    int currentCount;
    
    public:
    void addAnimal(Animal*a);
    void displayAnimal();
};






#endif
