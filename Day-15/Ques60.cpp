// Write a program to Move zeroes to end. 

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
   
   int index=0;
   int temp[size];
   for(int i=0;i<size;i++)
   {
    if(array[i] != 0)
    {
       temp[index++]=array[i]; 
    }
   }

   while (index<size)
   {
    temp[index++]=0;
   }

   cout<<"Array after moving zeroes to end : "<<endl;
   for(int i=0;i<index;i++)
   {
    cout<<"Array ["<<i<<"] = "<<temp[i]<<endl;
   }
   
    return 0;
}
