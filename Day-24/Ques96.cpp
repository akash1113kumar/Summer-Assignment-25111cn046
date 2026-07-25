// Write a program to Remove duplicate characters.

#include<iostream>
#include<string>
using namespace std;

string removeDuplicates(string str) 
{
    bool seen[256]={false};
    string result= "";

    for(char ch : str) 
    {
        if(!seen[(unsigned char)ch]) 
        {
            result+=ch;       // adding if not seen
            seen[(unsigned char)ch]=true;
        }
    }
    return result;
}

int main() {
    string input;
    cout<<"Enter a string : ";
    getline(cin,input);

    string output=removeDuplicates(input);
    cout<<"String after removing duplicates : "<<output<<endl;

    return 0;
}
