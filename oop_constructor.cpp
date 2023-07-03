#include <iostream>
using namespace std;

class myConstructor
{
public:
    myConstructor()
    {
        std::cout << "Hello My Constructor\n";
    }
};
int main()
{
    myConstructor myCons;
    return 0;
}