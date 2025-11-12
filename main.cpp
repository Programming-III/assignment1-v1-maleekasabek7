#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Hungry: " << (isHungry ? "Yes" : "No") << endl;
    }


    void feed() {
        if (isHungry) {
            cout << name << " was hungry. Feeding..." << endl;
            isHungry = false;
        } else {
            cout << name << " is not hungry." << endl;
        }
  string mammal(string furColor) {
        return furColor;
    }

    float bird(float wingspan) {
        return wingspan;
    }

    bool reptile(bool isVenomous) {
        return isVenomous;
    }
};
 void addAnimal(Animal* a) {
        if (currentCount < capacity) {
            animals[currentCount++] = a;
            cout << "Animal added to enclosure." << endl;
        } else {
            cout << "Enclosure is full!" << endl;
        }
    }

    void displayAnimals() {
        for (int i = 0; i < currentCount; i++) {
            animals[i]->display();
            cout <<" "<< endl;
        }
    }
};

// ============== MAIN FUNCTION ==============
    
int main(){

    Animal lion("Lion", 5, true);
    Animal parrot("Parrot", 2, false);
    Animal snake("snake",yes,true);

    lion.display();
    lion.feed();
    parrot.display();

 
    Enclosure zoo;
    zoo.addAnimal(&lion);
    zoo.addAnimal(&parrot);
    zoo.addAnimal(&snake);
    zoo.displayAnimals();

  
    Visitor v1("Alice", 2);
    v1.displayInfo();

   
    cout << lion.mammal("Golden") << endl;
    cout << "Parrot wingspan: " << parrot.bird(1.2) << " meters" << endl;
    cout << "Is reptile venomous? " << (lion.reptile(false) ? "Yes" : "No") << endl;

    return 0;
}
