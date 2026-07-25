// Write a program to Frequency of an element. 

#include<iostream>
using namespace std;
int main (){
    
    int size,target,frequency=0;
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
  
    cout<<"Enter the number for which frequency to be calculated : ";
    cin>>target;

    for(int i=0;i<size;i++)
    {
        if(array[i]==target)
        {
            frequency++;
        }
    }

    cout<<target<<" is found "<<frequency<<" times in the array."<<endl;

    return 0;
}