// Write a program to Reverse array. 

#include<iostream>
using namespace std;
int main (){
    
   
    int size;
    cout<<"Enter the size of Array : ";
    cin>>size;

    

   // for input array.
    int array[size];
    cout<<"Enter the element of array : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Array["<<i<<"] = ";
        cin>>array[i];
       
    }
   
    // Reversing the array
   int start=0 , end=size-1;
   while(start<end)
   {
    swap(array[start],array[end]);
    start++;
    end--;
   }


   // Printing the array
   cout<<"Reversed array : "<<endl;
    for(int i =0 ;i<size;i++)
    {
        cout<<"Array["<<i<<"] = "<<array[i]<<" "<<endl;
    }
    return 0;
}
