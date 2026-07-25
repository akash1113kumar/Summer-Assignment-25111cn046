// Write a program to Find first repeating character.

#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string str;
    cout<<"Enter string : ";
    getline(cin,str);

    int freq[256]={0};  

    for(int i=0;i<str.length();i++) 
    {
        freq[(unsigned char)str[i]]++;

        // As soon as a character frequency becomes 2, it is repeating
        if(freq[(unsigned char)str[i]]==2) 
        {
            cout<<"First repeating character : "<<str[i]<<endl;
            return 0;
        }
    }

    cout<<"No repeating character found"<<endl;
    return 0;
}
