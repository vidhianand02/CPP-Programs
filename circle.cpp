#include<iostream>
using namespace std;

#include<conio.h>

class circle

{
    float radius,area,circumference;
    public:
    void getdata()
     {
        cout<<"Enter radius:";
        
        cin>>radius;
     }
     void putdata()
     {
         area=3.14*radius*radius;
         circumference=2*3.14*radius;
         cout<<"Area of circle="<<area<<endl;
         cout<<"Circumference of circle="<<circumference<<endl;
         }

};

int main()

{
    circle c;

    c.getdata();
    c.putdata();
    getch();

}