#include <iostream>
using namespace std;

class Shape
{
protected:
    int width;
    int height;

public:
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
};

class Rectangle : public Shape
{
public:
    int getArea()
    {
        return width * height;
    }
};
class Tringle : public Shape
{
public:
    int getArea()
    {
        return (width * height) / 2;
    }
};
 int main()
{
    Rectangle rect;
    Tringle tri;
    rect.setHeight(10);
    rect.setWidth(5);
    std::cout<<rect.getArea()<<endl;
    tri.setWidth(5);
    tri.setHeight(10);
    std::cout<<tri.getArea()<<endl;
    return 0;
}