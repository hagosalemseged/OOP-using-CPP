#include <iostream>
using namespace std;

class Animal{
    public:
    void animalSound(){
        std::cout<<"The animals makes sound\n";
    }
};

class Pig:public Animal{
    public:
    void animalSound(){
        std::cout<<"The pig says: wee wee \n";
    }
};

class Dog: public Animal{
    public:
    void animalSound(){
        std::cout<<"The dog says: bow bow\n";
    }
};

int main(){
    Animal myAni;
    Pig myPig;
    Dog myDog;
    myAni.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    return 0;
}