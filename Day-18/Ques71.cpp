// Write a program to Binary search.

#include <iostream>
using namespace std;

int binarySearch(int array[],int size,int target) 
{

   int start=0,end=size-1;
   while(start<=end)
   {
    int mid=start+(end-start)/2;

    if(target>array[mid])
    {
        start=mid+1;
    }
    else if(target<array[mid])
    {
        end=mid-1;
    }
    else 
    {
        return mid;
    }
   }
   return -1;
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
    int target;
    cout<<"Enter the Number to find out : ";
    cin>>target;

    int index = binarySearch(array,size,target);

    if(index==-1)
    {
        cout<<"Number not found.";
    } 
    else 
    {
        cout<<target<<" found at "<<index<<" index ";
    }
    return 0;
}
