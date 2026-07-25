// Write a program to Count vowels and consonants. 

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

    int vowelcount=0,consonantcount=0;

    for(char ch : str)
    {
        if(isalpha(ch))
        { 
        if(tolower(ch)=='a'||tolower(ch)=='e'||tolower(ch)=='i'||tolower(ch)=='o'||tolower(ch)=='u')
        {
         vowelcount++;
   
        } 
         else 
         {
            consonantcount++;
         }
        } 
    }

    cout<<"Number of vowel in string is : "<<vowelcount<<endl;
    cout<<"Number of consonant in string is : "<<consonantcount<<endl;
    return 0;
}