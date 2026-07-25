// Write a program to Second largest element. 

#include<iostream>
using namespace std;
int main (){
    
  
    int size;
    cout<<"Enter the size of Array : ";
    cin>>size;
    int array[size];
    int largest,secondlargest;

   // for input array.
    cout<<"Enter the element of array : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Array["<<i<<"] = ";
        cin>>array[i];
       
    }
    
    largest = secondlargest=array[0];
    for(int i=0;i<size;i++)
    {
      if(array[i]>largest)
      {
        secondlargest = largest;
        largest = array[i];
      }
      else if(array[i]>secondlargest && array[i] != largest)
      {
        secondlargest=array[i];
      }
    }
    cout<<"Largest element in the array is : "<<largest<<endl;
    cout<<"Second largest element in the array is : "<<secondlargest<<endl;

    return 0;
}