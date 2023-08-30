#include <iostream>
using namespace std;

class Maths
{

    float l, b, r, a;
    float  areaC, areaS, areaR;

public:
    Maths()
    {
        cout << "Enter Length, Bredth, Side and Radius" << endl;

        cin >> l >> b >> a >> r;
    }

    void circle()
    {
        areaC = 3.14 * r*r;
        cout << "area of circle:"<<areaC<<endl;

    }

    void rectangle(){

        areaR = l*b;
        cout<<"area of rectangle:"<<areaR<<endl;
    }

    void square(){

        areaS = a*a;
        cout<<"area of square:"<<areaS<<endl;
    }
};

int main()
{

    Maths mat;

    mat.circle();
    mat.rectangle();
    mat.square();

    return 0;
}