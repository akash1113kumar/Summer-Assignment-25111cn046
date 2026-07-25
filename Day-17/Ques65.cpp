// Write a program to Merge arrays. 

#include<iostream>
using namespace std;
int main (){
   
    // for input array1
    int size1;
    cout<<"Enter the size of 1st Array : ";
    cin>>size1;

    int array1[size1];
    cout<<"Enter the element of 1st array : "<<endl;
    for(int i=0;i<size1;i++)
    {
        cout<<"Array["<<i<<"] = ";
        cin>>array1[i];
       
    }
    
    // for inputing 2nd array.
    int size2;
    cout<<"Enter the size of 2nd array : ";
    cin>>size2;

    int array2[size2];
    cout<<"Enter the element of 2nd array : "<<endl;
    for(int i=0;i<size2;i++)
    {
        cout<<"Array["<<i<<"] = ";
        cin>>array2[i];
    }

    // Merging array.
    int size3=size1+size2;
    int array3[size3];
   
    for(int i=0;i<size1;i++)
    {
        array3[i]=array1[i];
    }
    for(int i = size1,j=0;i<size3,j<size2;i++,j++)
    {
        array3[i]=array2[j];
    }
  
    // output the merging array.
    cout<<"Array after merging : "<<endl;
    for(int i=0;i<size3;i++)
    {
        cout<<"Array["<<i<<"] = "<<array3[i]<<endl;
    }
   
    return 0;
}
