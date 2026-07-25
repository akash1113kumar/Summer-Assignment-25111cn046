//Write a program to Check whether a number is palindrome. 

#include<iostream>
using namespace std;
int main(){
    int n,i,digits,revnum;
    cout<<"Enter the number : ";
    cin>>n;
    revnum=0;
    i=n;
    while(i!=0){
        digits=i%10;
        revnum=revnum*10+digits;
        i=i/10;
    }
    cout<<"Number : "<<n<<endl;
    cout<<"Reversed number is: "<<revnum<<endl;
    if (revnum==n){
        cout<<"The number is a palindrome number.";
    }
    else{
        cout<<"The number is not a palindrome number.";
    }
    
    return 0;
}
