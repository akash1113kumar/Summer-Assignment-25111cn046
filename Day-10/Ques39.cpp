// Write a program to Print number pyramid. 
//     1 
//    121 
//   12321 
//  1234321 
// 123454321 

#include <iostream>
using namespace std;

int main() 
{
    int rows,i,j;
    cout<<"Enter no of rows : ";
    cin>>rows;

    for(i=1;i<= rows;i++) 
    {
        //for printing spaces
        for(j= 1;j<= rows- i;j++)
        {
            cout<<" ";
        }
        //for printing numbers
        for(j= 1;j<= i;j++) 
        {
            cout<< j;
        }
        // for printing numbers in decreasing order.
        for(j= i - 1;j>= 1;j--) 
        {
            cout<< j;
        }
        cout<<endl;
    }
    return 0;
}
