//Write a program to Check whether a number is prime.

#include<iostream>
using namespace std;
int main (){
  int n,i;
  bool isprime=true;
  
  cout<<"Enter Number : ";
  cin>>n;
 
  for(i=2;i<n;i++){
    if(n%i==0)
{
    isprime=false;
    break;
}
  }
  if (isprime==true){
    cout<<n<<" is a Prime number."<<endl;
  }else
  {
    cout<<n<<" is not a Prime number."<<endl;
  }
return 0;
}