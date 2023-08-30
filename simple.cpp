#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b, int c = 8)
    {

        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printdata();
};

void simple::printdata()
{
    cout << "The value of data1, data2 and data3 is " << data1 << ", " << data2 << " and " << data3 << endl;
}

int main()
{
    simple s(52, 63, 9);
    s.printdata();
    
    simple k(5, 74, 30);
    k.printdata();

    return 0;
}
