//Write a program to Reverse a number. 

#include<iostream>
using namespace std;
int main()
{
   int n,digit,revnum=0;
   cout<<"Enter the number : ";
    cin>>n;

   while(n>0)
   {
     digit=n%10;
        revnum=revnum*10+digit;
        n=n/10;
   } 
   cout<<"Reverse of the number is : "<<revnum<<endl;
    
    return 0;
}
