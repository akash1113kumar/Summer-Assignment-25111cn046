// Write a program to Find pair with given sum. 

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

    int target;
    cout<<"Enter the target sum : ";
    cin>>target;
   
    // Finding the Pair
    bool pair = false;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
             if(array[i]+array[j]==target)
             {
                cout<<"Target pair found "<<array[i]<<" and "<<array[j]<<" at index "<<i<<" and "<<j<<endl;
                pair = true;
             }
        }
    }

    if(pair==false)
    {
        cout<<"Pair not found."<<endl;
    }

    return 0;
}
