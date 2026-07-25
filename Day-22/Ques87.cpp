// Write a program to Character frequency. 

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

    char c;
    cout<<"Enter the character of which frequency to be calculated : ";
    cin>>c;

    int freq=0;
    for(char ch : str)
    {
        if(ch == c)
        {
            freq++;
        } 
    }
    cout<<"Frequency of "<<c<<" is : "<<freq<<endl;

    return 0;

}