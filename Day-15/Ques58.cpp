// Write a program to Rotate array left. 

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
   
    // Rotating the array left 
    int rotation;
    cout<<"Enter number of Rotation : ";
    cin>>rotation;

    // normalising rotation
    rotation= rotation % size;
    
    //
    int temparray[rotation];
    for(int i =0;i<rotation;i++){
        temparray[i] = array[i]; 
       
    }

    for(int i = rotation; i<size;i++)
    {
        array[i-rotation]=array[i];
    }

    for(int i=size-rotation;i<size;i++)
    {
        array[i]=temparray[i-(size-rotation)];
    }

    cout<<"After rotating left with "<<rotation<<" rotation : "<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<"Array["<<i<<"] = "<<array[i]<<endl;;
    }

    return 0;
}
