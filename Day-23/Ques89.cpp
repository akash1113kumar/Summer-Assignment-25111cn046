// Write a program to Find first non-repeating character.

#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string str;
    cout<<"Enter string : ";
    getline(cin,str);

    int freq[256]={0};

    // Calculating frequency of each character.
    for(int i=0;i<str.length();i++) 
    {
        freq[(unsigned char)str[i]]++;
    }

   
    for(int i=0;i<str.length();i++) 
    {
        if(freq[(unsigned char)str[i]]==1) 
        {
            cout<<"First non repeating character : "<<str[i]<<endl;
            return 0;
        }
    }

    cout<<"No non repeating character found"<<endl;
    return 0;
}
