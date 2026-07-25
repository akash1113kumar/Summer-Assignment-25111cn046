// Write a program to Write function to find factorial.

#include<iostream>
using namespace std;

int factorial(int n)
{
   int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main ()
{
    
   int n;
   cout<<"Enter the number : ";
   cin>>n;

   if(n<0)
   {
    cout<<"Factorial doesn't exist for negative number."<<endl;
   }
   else
   {
    cout<<"Factorial : "<<factorial(n)<<endl;
   }

    return 0;
}