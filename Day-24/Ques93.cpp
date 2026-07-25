// Write a program to Check string rotation. 

#include <iostream>
#include <string>
using namespace std;

bool isRotation(string s1,string s2) 
{
    if(s1.length() !=s2.length()) 
    {
        return false;
    }

    string temp=s1+s1; 
    int n=s2.length();

    for(int i=0;i<=(int)temp.length()-n;i++) 
    {
        int j;
        for(j=0;j<n;j++) 
        {
            if(temp[i+j] !=s2[j])
            {
              break;  
            } 
        }
        if(j==n)
        {
          return true;  // full match found  
        } 
    }
    return false;
}

int main() 
{
    string str1,str2;
    cout<<"Enter first string : ";
    cin>>str1;
    cout<<"Enter second string : ";
    cin>>str2;

    if(isRotation(str1,str2))
    {
      cout<<"Yes, the strings are rotations of each other."<<endl;  
    }    
    else
    {
      cout<<"No, the strings are not rotations."<<endl; 
    }


    return 0;
}
