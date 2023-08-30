#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<<"enter three numbers:";
    cin>>a>>b>>c;

    if(a>b){
        cout<<"a is the greatest:"<<a<<endl;
    }
    else if(b>c){
        cout<<"b is the greatest:"<<b<<endl;
    }
    else{
        cout<<"c is the greatest;"<<c<<endl;
    }

    return 0;
}