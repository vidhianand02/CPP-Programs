#include <iostream>
using namespace std;

int main()
{

    float a,b;
    cout<<"Enter two numbers: ";
    cin >>a>>b;

    char button;
    cout<<"Enter the operation: ";
    cin >> button;

    switch (button)
    {
    case '+':
    float c;
        c =a+b;
        cout << c << endl;
        break;
    case '-':
        c=a-b;
        cout << c << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    default:
        cout << "Invalid operation";
        break;
    }
}