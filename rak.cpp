#include<iostream>
using namespace std;

class opo{
    public:
    int number;

    opo(){
        number=0;
       
    }
    void inputnum(){
        cout<<"enter a number =  "<<endl;
        cin>>number;
      
    }
    opo operator+(const opo  &obj1)
    {
        opo temp1;
        temp1.number=number+obj1.number;
        
        return(temp1);
    }
    opo operator-(const opo  &obj2)
    {
        opo temp2;
        temp2.number=number-obj2.number;
        
        return(temp2);
    }
    opo operator/(const opo  &obj3)
    {
        opo temp3;
        temp3.number=number/obj3.number;
        
        return(temp3);
    }
    opo operator*(const opo  &obj4)
    {
        opo temp4;
        temp4.number=number*obj4.number;
        
        return(temp4);
    }

    void display(){
        cout<<"output of operations are :  "<<number<<endl;
    }
};

int main(){
    opo cpp1,cpp2,result_1,result_2,result_3,result_4;
    cpp1.inputnum();
    cpp2.inputnum();
    result_1=cpp1+cpp2;
    result_2=cpp1-cpp2;
    result_3=cpp1/cpp2;
    result_4=cpp1*cpp2;
    result_1.display();
    result_2.display();
    result_3.display();
    result_4.display();
    return 0;
}