#include<iostream>
using namespace std;

class opr{
    public:
    float num1;

    opr(){
        num1=0;
       
    }
    void input(){
        cout<<"enter a number - "<<endl;
        cin>>num1;
      
    }
    opr operator+(const opr  &obj1)
    {
        opr temp1;
        temp1.num1=num1+obj1.num1;
        
        return(temp1);
    }
    opr operator-(const opr  &obj2)
    {
        opr temp2;
        temp2.num1=num1-obj2.num1;
        
        return(temp2);
    }
    opr operator/(const opr  &obj3)
    {
        opr temp3;
        temp3.num1=num1/obj3.num1;
        
        return(temp3);
    }
    opr operator*(const opr  &obj4)
    {
        opr temp4;
        temp4.num1=num1*obj4.num1;
        
        return(temp4);
    }

    void display(){
        cout<<"output of operations are :  "<<num1<<endl;
    }
};

int main(){
    opr cal1,cal2,r1,r2,r3,r4;
    cal1.input();
    cal2.input();
    r1=cal1+cal2;
    r2=cal1-cal2;
    r3=cal1/cal2;
    r4=cal1*cal2;
    r1.display();
    r2.display();
    r3.display();
    r4.display();
    return 0;
}