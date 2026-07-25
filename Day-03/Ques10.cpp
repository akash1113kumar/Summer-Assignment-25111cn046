//Write a program to Print prime numbers in a range. 

#include<iostream>
using namespace std;

int main ()
{
    int n,m,i,j;
    
    cout<<"Enter the Highest range number : ";
    cin>>n;
    cout<<"Enter the lowest range : ";
    cin>>m;
    cout<<"Prime numbers in range are : ";
    for(i=m;i<=n;i++){
        bool isprime=true;
        for(j=2;j<i;j++){

        
        if(i%j==0){
       isprime=false ;
            break;
        } 
      }
      if(isprime==true){
        cout<<i<<" ";
      }
    }
}
  