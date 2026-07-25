// Write a program to Find string length without strlen(). 

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

    int length =0;
    for(char ch : str)
    {
       length++;
    }

    cout<<"Length of the string is : "<<length;

    return 0;
}
