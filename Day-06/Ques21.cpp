// Write a program to Convert decimal to binary. 

#include <iostream>
using namespace std;

int main ()
{
    int decimal,binary=0,remainder,base=1;

    cout<<"Enter the decimal number : ";
    cin >> decimal;
   
    
    cout << "Binary of " << decimal << " is = ";
    while(decimal>0)
    {
        remainder = decimal % 2;
        binary = binary + remainder*base;
        base = base*10;
        decimal /= 2;
    }

    cout<<binary<<" "<<endl;

    return 0;
}