// Write a program to Sort array in descending order. 

#include<iostream>
using namespace std;

void sortInDescending(int array[],int size) 
{
    // using bubble sort in descending order
    for(int i=0;i<size-1;i++) 
    {
        for(int j=0;j<size-i-1;j++) 
        {
            if(array[j]<array[j+1]) 
            {
                // Swaping elements
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

    sortInDescending(array,size);

    cout<<"Array sorted in descending order : ";
    for(int i=0;i<size;i++) 
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    return 0;
}
