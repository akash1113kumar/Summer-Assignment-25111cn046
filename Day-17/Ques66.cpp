// Write a program to Union of arrays.

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

   int size3=size1+size2;
   int array3[size3];

   int k = 0;

    // Copy elements of array1 into array3 (avoiding duplicates)
    for(int i=0;i<size1;i++)
     {
        bool found = false;
        for(int j=0;j<k;j++) 
        {
            if(array1[i]==array3[j])
            {
                found = true;
                break;
            }
        }
        if(found==false) 
        {
            array3[k++] = array1[i];
        }
    }

    // Copy elements of array2 into array3 (avoiding duplicates)
    for(int i=0;i<size2;i++) 
    {
        bool found = false;
        for(int j=0;j<k;j++) 
        {
            if(array2[i]==array3[j]) 
            {
                found = true;
                break;
            }
        }
        if(found==false) 
        {
            array3[k++] = array2[i];
        }
    }

    // Outputing union array
    cout<<"Array after Union: "<<endl;
    for(int i=0;i<k;i++) 
    {
        cout<<"Array["<<i<<"] = "<<array3[i]<<endl;
    }

    return 0;
}
