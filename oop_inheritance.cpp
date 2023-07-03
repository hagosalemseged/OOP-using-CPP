#include <iostream>
using namespace std;

// Parent class
class Vehicle{
    public:
    string brand = "Ford";
    void display(){
        std::cout<<"Tutt tuut \n";
    }
};
// child class
class Car:public Vehicle{
    public:
    string model = "Mustang";
};

int main(){
    Car myCar;
    myCar.display();
    std::cout<<myCar.brand<<" "<<myCar.model<<endl;
    return 0;
}

