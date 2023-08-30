#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
void openinfile(ifstream &infile)
{
 char filename[100];
 cout<<"Enter the file name: ";
 cin>>filename;
 infile.open(filename);
}
int main(void)
{
 ifstream inputfile;  //associates the file for input purpose
 ofstream outputfile;
 char chs;
 openinfile(inputfile);// for opening the file
 outputfile.open("C:\\SampleFile.txt");
 while (!inputfile.eof()  // for reading the contents of file
 {
 inputfile.get(chs); // for transfering the contents to write file
 if (!inputfile.eof())
 {
 cout<<chs;
 outputfile<<chs;
 }
 }
 cout<<"\nReading and writing file is completed!"<<endl;
 system("pause");
 inputfile.close();
 outputfile.close();
}