// Write a program to Write function for Fibonacci.
 
#include<iostream>
using namespace std;

void fibonacci(int n)
{ int a=0,b=1,c;

    for(int i = 1; i<=n;i++)
    {  
        if(i == 1)
        {
            cout<<a<<" ";
        }
        else if(i == 2)
        {
            cout<<b<<" ";
        }
        else
        {
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }

    }
}

int main()
{
     int num;
     cout<<"Enter the number of term : ";
     cin>>num;
     
     cout<<"Fibonacci series : ";
     fibonacci(num);
     return 0;
}