#include <iostream>
using namespace std;
class Example
{
public:
    string myName;
    int myAge;
    string myDpt;
};
int main()
{
    // Creating objects
    Example exam;
    exam.myName = "Hagos Alemseged";
    exam.myAge = 33;
    exam.myDpt = "Infromation Technology";
    std::cout<<"My Name is "<<exam.myName<<endl;
    std::cout<<"My age is "<<exam.myAge<<endl;
    std::cout<<"My department is "<<exam.myDpt<<endl;

    return 0;
}