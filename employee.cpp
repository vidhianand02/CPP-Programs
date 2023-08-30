#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee::count;

int main()
{
    Employee e1, e2, e3;

    e1.setData();
    e1.getData();
    Employee::getCount();

    e2.setData();
    e2.getData();
    Employee::getCount();

    e3.setData();
    e3.getData();
    Employee::getCount();

    return 0;
}