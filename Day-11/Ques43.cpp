// Write a program to Write function to check prime.

#include<iostream>
using namespace std;

int prime(int n)
{   int i ;
    bool isprime= true;
    for (i=2;i<n;i++)
    {
        if(n%i == 0)
        {
          isprime = false;
          break;
        }
        
    }
    if( isprime == false || n == 1)
    {
        return 0;
    }
    else 
    {
        return 1;
    }

}

int main (){
    int n , p ;
    cout<<"Enter the number : ";
    cin>>n;

    p=prime(n);

    if (p == 0)
    {
        cout<<n<<" is a not a Prime number."<<endl;
    }
    else
    {
       cout<<n<<" is a Prime number."<<endl;
    }

    return 0;
}