#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"Enter an alphabet"<<endl;
    cin>>button;

  //  if(button=='a'){
  //      cout<<"HELLO"<<endl;
  //  }
  //  else if(button=='b'){
  //      cout<<"NAMASTE"<<endl;
  //  }
    
    
  //    else if(button=='c'){
  //      cout<<"SALUT"<<endl;
  //  }
//
  //    else if(button=='d'){
   //       cout<<"HOLA"<<endl;
   //   }

  //    else if(button=='e'){
  //      cout<<"CIAO"<<endl;
 //   }
 //   else{
 //       cout<<"I am still learning"<<endl;
 //   }

     switch (button)
     {
         case 'a':
         cout<<"HELLO"<<endl;
         break;
         
         case 'b' :
         cout<<"NAMASTE"<<endl;
         break;
         
         case 'c' :
         cout<<"SALUT"<<endl;
         break;

         case 'd' :
         cout<<"HOLA"<<endl;
         break;

         case 'e' :
         cout<<"CIAO"<<endl;
         break;

         default:
         cout<<"I am still learning more"<<endl;
         break;


     }

    return 0;
}
        




    