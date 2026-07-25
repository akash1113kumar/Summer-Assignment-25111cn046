// Write a program to Find sum and average of array. 

#include<iostream>
using namespace std;

int main()
{   int size,sum=0;
    double avg;
    cout<<"Enter the size of Array : ";
    cin>>size;
    int array[size];

   
    cout<<"Enter the element of array : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Array["<<i<<"] = ";
        cin>>array[i];
        sum+=array[i];
    }

    cout<<"Sum of element of Array is : "<<sum<<endl;
     avg = (double)sum/size;
    cout<<"Average of element of Array is "<<avg<<endl;

    return 0;
}
