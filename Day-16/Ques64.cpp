// Write a program to Remove duplicates from array. 

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
        int freq=0;
        for(int j=i+1;j<size;j++)
        {
          if(array[i]==array[j])
          {
            freq++;
            break;
          }
        }
        if(freq==0)
        {
            temp[index++]=array[i];
        }
    }

    cout<<"Array after deleting duplicates : "<<endl;
    for(int i=0;i<index;i++)
    {
        cout<<"Array["<<i<<"] = "<<temp[i]<<endl;
    }

    return 0;
}
