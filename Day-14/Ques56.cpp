// Write a program to Find duplicates in array. 

#include<iostream>
using namespace std;
int main (){
    
  
    int size;
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

    for(int i=0;i<size;i++)
    {
        for(int j = i+1; j<size;j++)
        {
           if(array[i]==array[j])
           {
            cout<<array[i]<<" is found at "<<i+1<<" and "<<j+1<<" position."<<endl;
           }
        }
    }    

    return 0;
}