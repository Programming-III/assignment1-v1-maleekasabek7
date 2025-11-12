#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

 class Animal(string n,int a,bool h){
    name=n;
     age=a;
     isHugry=h;
}
void Animal :: display(){
      cout<< name<<endl;
        cout<<age<<endl;
          cout<<isHugry<<endl;
};
void Animal :: feed(){
   
    if (isHugry=true){
        cout<<"hungry";}
        else{
            cout<<"not hungry";
            
        }
    }
  string Animal:: mammal (string FC){
      string furcolor=FC;
      return FC;
      
  }
   float Animal:: bird(float WS){
        float wingspan=WS;
        return WS;
   }
  bool reptile(bool v){
      bool isvenomous=v;
      return v;
  }
void Enclosure:: addAnimal(Animal *a){
Enclosure *animal =new Enclosure();
}
void Enclosure:: displayAnimal(int a){
cout<<a  ;
}


// ============== MAIN FUNCTION ==============
int main() {
    
    Enclosure s;
s.addAnimal(66);
Animal lion("lion" ,5,"Hungry");
Animal parrot("parrot" ,2,"not hungry")

    return 0;
}
