// Write a program to Find maximum frequency element. 

#include<iostream>
using namespace std;

int main()
{
    int size ; 
    cout<<"Enter the size of array : ";
    cin>>size;

    // Input Array.
    int array[size];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<size;i++)
    {
      cout<<"Array["<<i<<"] = ";
      cin>>array[i];
    }

    int maxcount=0, maxelement;
    for(int i=0;i<size;i++)
    {  
          int count=1;

        for(int j = i+1; j<size;j++)
        {
           if(array[i]==array[j])
           {
              count++;
           }
        }

        if(count>maxcount)
        {
            maxcount = count;
            maxelement=array[i];
        }
    }
    
    cout<<"Maximum frequency element = "<<maxelement<<endl;
    cout<<"Maximum frequency = "<<maxcount<<endl;
    
   return 0;
}