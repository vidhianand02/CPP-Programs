#include <iostream>
using namespace std;

class Shape
{
protected:
    float dimension;
    float height;

public:
    void getDimension()
    {
        cin >> dimension;
        cin >> height;
    }

    virtual float calculateArea() = 0;
};

class Cylinder : public Shape
{
public:
    float calculateArea()
    {
        return 3.14 * dimension * dimension * height;
    }
};


int main()
{
    Shape *obj;
    Cylinder Cylinder;
    obj = &Cylinder;
    cout << "Enter the length of the cylinder: ";
    obj->getDimension();
    cout << "Volume of cylinder: " << obj->calculateArea() << endl;
    return 0;
}
