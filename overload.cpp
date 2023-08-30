#include <iostream>
using namespace std;

class text
{
    int x, y;

public:
    getValuel ()
    {
        cin >> x;
    }

    getValue2()
    {

        cin >>> y;
    }

    text operator+(text &obj)
    {

        text a;

        a.x = x + obj.y;

        return (a);
    }

    text operator - (text &obj)
    {

        text a;

        a.x = x - obj.y;

        return (a) ;
    }
    text operator * (text &obj){

text a;

a.x = x *obj.y;

return (a);
    }

text operator / (text &obj) {

text a;
a.x = x / obj.y;

return (a);
}

void sum () {

cout<<"Your sum is = "<<x<<endl;
}

void sub () {

cout<<"Your sub is = "<<x<<endl;
}

void mul () {

cout<<"Your mul is = "<<x<<endl;
}

void div() {

cout<<"Your div is = "<<x<<endl;
}
int main() {

text x1, yl, z;

x1.getValuel();

yl.getValue2();

Z= xl+y1;

z.sum();

z = x1-yl;

z.sub ();

z = x1*yl;

 z.mul();

z = xl/y1;

z.div();

return 0;

}