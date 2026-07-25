// Write a program to Write function for perfect number.

#include<iostream>
using namespace std;

int perfect(int n)
{
  int sum=0;
  for(int i=1;i<=n/2;i++)
  {
    if(n % i == 0)
    {
        sum += i;
    }
  }
  return sum;
}

int main()
{
    int num ;
    cout<<"Enter the number : ";
    cin>>num;

   if(perfect(num)==num)
   {
       cout<<num<<" is a Perfect number.";
    }
    else 
    cout<<num<<" is not a Perfect number. ";

    return 0;
}