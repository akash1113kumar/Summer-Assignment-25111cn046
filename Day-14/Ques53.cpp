// Write a program to Linear search. 

#include<iostream>
using namespace std;
int main (){
    
     
    int size,target;
    cout<<"Enter the size of Array : ";
    cin>>size;
    int array[size];

   // for input array.
    cout<<"Enter the element of array : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Array["<<i<<"] = ";
        cin>>array[i];
       
    }

    cout<<"Enter the number to find : ";
    cin>>target;

    int position=-1;
    for(int i = 0 ; i<size; i++)
    {
      if(array[i] == target)
      {
       position = i+1;
      }
     
    }
    if(position==-1)
    {
        cout<<"Not found."<<endl;
    }
    else
    {
        cout<<"Targetted number found at position "<<position<<"."<<endl;
    }

    return 0;
}