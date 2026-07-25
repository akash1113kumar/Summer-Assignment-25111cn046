// Write a program to Find longest word.

#include<iostream>
#include<string>
using namespace std;

string longestWord(string sentence) 
{
    string longest="";
    string current="";

    for(int i=0;i<=sentence.length();i++) 
    {
        // If space or end of string then it is word boundary.
        if(i==sentence.length() || sentence[i]==' ') 
        {
            if(current.length()>longest.length()) 
            {
                longest=current;
            }
            current=""; // reseting for next word
        } 
        else 
        {
            current+=sentence[i]; 
        }
    }
    return longest;
}

int main() 
{
    string sentence;
    cout<<"Enter a sentence : ";
    getline(cin,sentence);

    string longest=longestWord(sentence);
    cout<<"Longest word : "<<longest<<endl;

    return 0;
}
