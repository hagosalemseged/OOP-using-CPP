#include <iostream>
using namespace std;

class myEncapsulation
{
private:
    int mySalary;

public:
    void setSalary(int sal)
    {
        mySalary = sal;
    }
    int getSalary()
    {
        return mySalary;
    }
};
int main()
{
    myEncapsulation myEnc;
    myEnc.setSalary(20000);
    std::cout<<"Your Salary is "<<myEnc.getSalary()<<endl;
    return 0;
}