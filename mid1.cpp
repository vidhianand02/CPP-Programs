#include<iostream>
using namespace std;


class Employee {
    private:
        long Employee_Code;
        string Place_of_employee;
        int Employee_Mobile_Num;
        float Employee_weight;
    public:
        Employee() {
            Employee_Code=101;
            Place_of_employee="Agra";
            Employee_Mobile_Num=123456789;
            Employee_weight=68.52;
        }
        void inputData() {
            long code;
            string place;
            int num;
            float weight;
            cout<<"Enter the Employee Code: ";
            cin>>code;
            cout<<"Enter the Place of Employee: ";
            cin>>place;
            cout<<"Enter the Employee Mobile Number: ";
            cin>>num;
            cout<<"Enter the Employee Weight: ";
            cin>>weight;
            Employee_Code = code;
            Place_of_employee=place;
            Employee_Mobile_Num=num;
            Employee_weight=weight;
        }
        void show() {
            cout<<"\nEmployee Code: "<<Employee_Code;
            cout<<"\nPlace of Employee: "<<Place_of_employee;
            cout<<"\nEmployee Mobile Number: "<<Employee_Mobile_Num;
            cout<<"\nEmployee Weight: "<<Employee_weight;
        }
};