// Write a program to Selection sort. 

#include <iostream>
using namespace std;

void selectionsort(int array[],int size) 
{
    // Outer loop for passes
    for(int i=0;i<size-1;i++) 
    {
        // Assuming the current index is minimum
        int minIndex=i;

        // Inner loop to find the minimum element
        for(int j=i+1;j<size;j++) 
        {
            if(array[j]<array[minIndex]) 
            {
                minIndex=j;
            }
        }

        // Swapping the minimum found with the first element of sorted array.
        int temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
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

    selectionsort(array,size);

    cout<<"Selection sorted array : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Array["<<i<<"] = "<<array[i]<<endl;
    }
        
    return 0;
}
