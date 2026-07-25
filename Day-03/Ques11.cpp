//Write a program to Find GCD of two numbers.

#include<iostream>
using namespace std;
int main(){
    int num1,num2,i,gcd;
    cout<<"Enter the two number : ";
    cin>>num1>>num2;


  for ( i=1; i <= num1 && i <= num2; i++ ){
    if (num1%i ==0 && num2%i==0){
        gcd=i;
    }
  }  
  cout<<"Gcd of number "<<num1<<" and "<<num2<<" is "<<gcd<<endl;
  return 0;
}