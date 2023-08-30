#include <iostream>
using namespace std;

int main()
{
    float basic, gross, da, hra;

    cout<<"Enter basic salary of an employee: "<<endl;
    cin>>basic;

    if(basic <= 10000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }

    gross = basic + hra + da;

    cout<<"GROSS SALARY OF EMPLOYEE = %.2f"<< gross<<endl;

    return 0;
}