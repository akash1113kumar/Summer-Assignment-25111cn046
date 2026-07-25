// Write a program to Find missing number in array.

#include<iostream>
using namespace std;

int main()
{
    int size ; 
    cout<<"Enter the size of array : ";
    cin>>size;

    // Input Array.
    int array[size-1];
    cout<<"Enter the "<<size-1<<" elements of the array : "<<endl;
    for(int i=0;i<size-1;i++)
    {
      cout<<"Array["<<i<<"] = ";
      cin>>array[i];
    }

    // Sum of all elements of array.
   int sum=0;
   for(int i=0;i<size-1;i++)
   {
     sum += array[i];
   }

   // Sum of n natural numbers
   int totalsum ;
   totalsum  = (size * (size + 1))/2;
  

   // output the missing number.
   cout<<"Missing number is : "<<totalsum-sum;

   return 0;
}