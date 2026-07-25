// Write a program to Input and display array.

#include<iostream>
using namespace std;
int main (){
   int size ;
   cout<<"Enter size of Array : ";
   cin>>size;

   int array[size];
   
   for(int i = 0; i<size;i++)
   {
    cout<<"Array["<<i<<"] = ";
    cin>>array[i];
   }

   cout<<"\nEntered Array : "<<endl;

   for(int i = 0;i<size;i++)
   {
    cout<<"Array["<<i<<"] = "<<array[i]<<endl;
   }

    return 0;
}