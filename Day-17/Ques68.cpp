// Write a program to Find common elements. 

#include<iostream>
using namespace std;
int main (){
    
    
    // for input array1
    int size1;
    cout<<"Enter the size of 1st Array : ";
    cin>>size1;
    int array1[size1];
    cout<<"Enter the element of 1st array : "<<endl;

   
    for(int i=0;i<size1;i++)
    {
        cout<<"Array["<<i<<"] = ";
        cin>>array1[i];
       
    }
    
    // for inputing 2nd array.
   
    int size2;
    cout<<"Enter the size of 2nd array : ";
    cin>>size2;
    int array2[size2];
    
    cout<<"Enter the element of 2nd array : "<<endl;
    for(int i=0;i<size2;i++)
    {
        cout<<"Array["<<i<<"] = ";
        cin>>array2[i];
    }

    // finding common elements.
   int size3=size1+size2;
   int array3[size3];

   int k = 0;

   for(int i=0;i<size1;i++)
   {
    for(int j =0;j<size2;j++)
    {
        if(array1[i]==array2[j])
        {
            array3[k++]=array1[i];
        }
    }
   }

    // Outputing common elements. 
    cout<<"Common Elements : ";
    for(int i=0;i<k;i++) 
    {
        cout<<array3[i]<<" ";
    }
    cout<<endl;

    return 0;
}
