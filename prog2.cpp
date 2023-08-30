#include <iostream>
using namespace std;

class student
{
    static int roll;
     int marks;
    string name;

public:
    student(int a, int b, string c)
    {
        a = roll;
        b = marks;
        c = name;
    }

    void show()
    {
        cout << "The roll no. of the student is:" << roll << "marks is" << marks << "name is:" << name << endl;
          roll = roll++;
    }
};

int main()
{
    student stu(55, 85, "vidhi");

    stu.show();

    return 0;
}