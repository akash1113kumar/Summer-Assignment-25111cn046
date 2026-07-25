// Write a program to Convert binary to decimal. 


#include<iostream>
using namespace std ;

 int main ()
 {
    int binary, decimal = 0, remainder=0, base=1;

    cout<<"Enter the binary value : ";
    cin>>binary;
    
    int clonebinary = binary;
    while( clonebinary > 0)
    {
       remainder = clonebinary % 10;
       decimal = decimal + remainder*base;
       base = base*2;
       clonebinary /= 10;
    }
    cout<<"Decimal value of "<<binary<<" = "<<decimal<<endl;

    return 0;
 }