// Write a program to Write function to find maximum.

#include<iostream>
using namespace std;

double max(double a, double b)
{
   if(a>b)
   {
    return a;
   }
   else 
   {
    return b;
   }
}
int main ()
{
    double a , b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    cout<<"Maximum number is : "<<max(a,b);
    
    return 0;
}