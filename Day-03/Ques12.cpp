//Write a program to Find LCM of two numbers.

#include<iostream>
using namespace std;
int main (){
    
    int num1,num2,i,lcm=0;

    cout<<"Enter two number : ";
    cin>>num1>>num2;

    for (i=1;i>0; i++)
    {
        if (i%num1==0 && i%num2 ==0){
            lcm=i;
            break;
        }

    }
cout<<"LCM is "<<lcm<<endl;

    return 0;
}