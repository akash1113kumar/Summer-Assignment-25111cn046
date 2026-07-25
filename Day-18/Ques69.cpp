// Write a program to Bubble sort. 

#include <iostream>
using namespace std;

void bubblesort(int array[],int size) 
{
    // Outer loop for passes
    for(int i=0;i<size-1;i++) 
    {
        // Inner loop for comparisons
        for(int j=0;j<size-i-1;j++) 
        {
            // Swaping if elements are in wrong order
            if(array[j]>array[j+1]) 
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

int main() {
    
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int array[size];
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0;i<size;i++)
    {
       cout<<"Array["<<i<<"] = "; 
       cin>>array[i];
    }

    bubblesort(array,size);

    cout<<"Bubble sorted array : "<<endl;
    for(int i=0;i<size;i++)
    {
      cout<<"Array["<<i<<"] = "<<array[i]<<endl;  
    }
        
    return 0;
}
