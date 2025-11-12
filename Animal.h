#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 

class Animal{
    private:
    string name;
    int age;
    bool isHugry;
    public:
    void display();
    void feed();

   
}


#endif
