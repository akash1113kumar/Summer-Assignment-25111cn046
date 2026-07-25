//Write a program to Generate Fibonacci series. 

#include<iostream>
using namespace std;

int main()
  {
    int n,a=0,b=1,i=1,c;
    
    cout<<"Enter number of terms : ";
    cin>>n;

    cout<<"Fibonacci series : ";

    cout<<a<<" "<<b<<" ";

      while(i<=n-2)
      {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        i++;
      }

    return 0;
  }