#include <iostream>
using namespace std;

class Data
{

public:
    void print_data()
    {
        cout << "employee name 1: Sunil, age:20" << endl;
        cout << "employee name 2: Anil, age:25" << endl;
        cout << "employee name 3: Sumeet, age:23" << endl;
    }
};

int main()
{
    Data S;
    S.print_data();

    return 0;
}
