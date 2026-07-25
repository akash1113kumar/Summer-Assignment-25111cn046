// Write a program to Write function to find sum of two numbers. 

#include<iostream>
using namespace std;

double sum(double a, double b)
{
    return(a+b);
}

int main()
{
    double a , b;
    cout<<"Enter the two numbers : ";
    cin>>a>>b;
   
    cout<<"Sum of "<<a<<" and "<<b<< " = "<<sum(a,b)<<endl;

    return 0;
} 