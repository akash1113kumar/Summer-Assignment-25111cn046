// Write a program to Convert lowercase to uppercase.

#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

    for(char &ch : str)
    {
        ch=toupper(ch);
    }
    cout<<"String in upppercase is : "<<str<<endl;

    return 0;

}
