// Write a program to Rotate array right. 

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
   
    // Rotating the array right
    int rotation;
    cout<<"Enter number of Rotation : ";
    cin>>rotation;

    rotation= rotation % size;
    
    int temparray[rotation];

    for(int i =0;i<rotation;i++){
        temparray[i] = array[size-rotation+i]; 
       
    }

    for(int i = size-rotation-1; i >=0 ;i--)
    {
        array[i+rotation]=array[i];
    }

    for(int i=0;i<rotation;i++)
    {
        array[i]=temparray[i];
    }

    cout<<"After rotating right with "<<rotation<<" rotation : "<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<"Array["<<i<<"] = "<<array[i]<<endl;;
    }

    return 0;
}
