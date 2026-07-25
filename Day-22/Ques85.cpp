// Write a program to Check palindrome string.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

    int start=0,end=str.length()-1;
    bool ispalindrome = true;
    while(start<end)
    {
        if(tolower(str[start])==tolower(str[end]))
         {
            continue;
          }
        else 
        {
          ispalindrome =false;
          break;
        }
        start++;
        end--;
    }
    if(!ispalindrome)
    {
        cout<<str<<" is not a palindrome string.";
    }
    else 
    {
        cout<<str<<" is a Palindrome string.";
    }
    return 0;
}