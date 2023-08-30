#include<iostream>
using namespace std;

int main(){
    int i;

    //using do while

    int maths[10] = {5,6,20,17,14,5,13,19,7,11};

    do{
        cout<<"The value of"<<i<<"is:"<<maths[i]<<endl;
        i=i+1;
    }while(i<10);

    return 0;
}