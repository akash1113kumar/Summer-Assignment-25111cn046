// Write a program to Count even and odd elements.

#include<iostream>
using namespace std;

int main()
{
    
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
    
    // finding odd and even elements.
    int oddcount=0,evencount=0;
    for(int i=0;i<size;i++)
    {
       if(array[i] % 2 == 0)
       {
        evencount++;
       }
       else 
       {
        oddcount++;
       }
    }

    cout<<"Number of Even elements in Array : "<<evencount<<endl;
    cout<<"Number of odd elements in Array : "<<oddcount<<endl;

    return 0;
}