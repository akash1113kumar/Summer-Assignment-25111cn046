// Write a program to Write function for Armstrong.

#include<iostream>
#include<cmath>
using namespace std;

int armstrong(int n)
{
  int temp,digit=0,remainder;
  double sum=0;
  temp=n;
  while(temp>0)
  {
   temp/=10;
   digit++;
  }
  temp=n; 
  while(temp>0)
  {
    remainder = temp%10;
    sum+=pow(remainder,digit);
    temp/=10;
  }
  return sum;
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    if((int)armstrong(n)==n)
   {
    cout<<n<<" is a Armstrong number."<<endl;
   }
   else 
   {
    cout<<n<<" is not a Armstrong number."<<endl;
   }

}