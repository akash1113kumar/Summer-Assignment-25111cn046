// Write a program to Write function for palindrome.

#include<iostream>
using namespace std;

int palindrome(int n)
{ int sum=0, pow=1;
   while(n>0)
   {
    int digit = n%10;
    n/=10;
    sum = sum*10+digit;
    pow*=10;
   }
   return sum;
}
int main (){
    
 int n,p;
 cout<<"Enter the number : ";
 cin>>n;

p=palindrome(n);

   if(p==n)
   {
    cout<<n<<" is a Palindrome number. "<<endl;
   }
   else
   {
    cout<<n<<" is not a Palindrome number. "<<endl;
   }

    return 0;
}