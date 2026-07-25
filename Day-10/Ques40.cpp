// Write a program to Print character pyramid. 
//     A 
//    ABA 
//   ABCBA 
//  ABCDCBA 
// ABCDEDCBA


#include <iostream>
using namespace std;

int main() 
{
    int rows,i,j;
    char ch;
    cout<<"Enter no of rows : ";
    cin>>rows;

    for(i=1;i<= rows;i++) 
    {
        //for printing spaces
        for(j= 1;j<= rows- i;j++)
        {
            cout<<" ";
        }
        //for printing characters in increasing order
        for(ch='A';ch<'A' + i;ch++) 
        {
            cout<< ch;
        }
        //for printing characters in decreasing order
        for(ch='A' + i - 2;ch>= 'A';ch--) 
        {
            cout<< ch;
        }
        cout<<endl;
    }
    return 0;
}