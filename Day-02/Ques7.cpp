//Write a program to Find product of digits. 

#include<iostream>
using namespace std;
int main(){
    int n,digit,product=1;
    cout<<"Enter the number: ";
    cin>>n;
    while(n!=0){
        digit=n%10;
        product*=digit;
        n/=10;
    }
    cout<<"Product of digits is: "<<product;
    return 0;
}
