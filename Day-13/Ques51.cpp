// Write a program to Find largest and smallest element. 

#include<iostream>
#include<climits>
using namespace std;

int main()
{
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
    
   // for finding largest and smallest. 
    int largest=INT_MIN ;
    int smallest=INT_MAX ;
    for(int i=0;i<size;i++)
    {
      if(array[i]>largest)
      {
        largest = array[i];
      }
      if(array[i]<smallest)
      {
        smallest= array[i];
      }
    }

    // printing the values.
    cout<<"Largest number of the Array is : "<<largest<<endl;
    cout<<"Smallest number of the Array is : "<<smallest<<endl;

    return 0;
}