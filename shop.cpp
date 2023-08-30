#include<iostream>
using namespace std;

class shop{
    int itemid[100];
    int itemprice[100];
    int count;

public:
    void initialcount(){count=1;}
    void setprice();
    void displayprice();

};

void shop:: setprice(){
    cout<<"Enter Id of your item no."<<count<<endl;
    cin>>itemid[count];

    cout<<"enter price of your item"<<endl;
    cin>>itemprice[count];
    count++;
}

void shop::displayprice(){
    for (int i = 1; i < count; i++)
    {
        cout<<"the price of the item id" << itemid[i] << "is:" << itemprice[i]<<endl;    }
    
}

int main(){

    shop supermarket;
    supermarket.initialcount();
    supermarket.setprice();
    supermarket.setprice();
    supermarket.setprice();
    supermarket.setprice();
    supermarket.displayprice();

    return 0;
}
