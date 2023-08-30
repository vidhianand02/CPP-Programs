#include<iostream>
using namespace std;

int main(){
    int i;
    //using while loops

    int maths[10] = {5,6,20,17,14,5,13,19,7,11};

    while(i<10){

        cout<<"The value of"<<i<<"is:"<<maths[i]<<endl;

        i++;
    }

    return 0;
}