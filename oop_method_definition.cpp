#include <iostream>
using namespace std;

class FunctionDefinition{
    public:
    // Inside class definition
    void insideDefinition(){
        std::cout<<"Inside class definition\n";
    }
    // outside class definition
    void outsideDefinition();
};
// outside class definition
void FunctionDefinition::outsideDefinition(){
    std::cout<<"Outside class definition\n";
}
int main(){
    FunctionDefinition fd;
    fd.insideDefinition();
    fd.outsideDefinition();
    return 0;
}