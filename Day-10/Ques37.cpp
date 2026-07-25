// Write a program to Print star pyramid. 
//     * 
//    *** 
//   ***** 
//  ******* 
// *********

#include<iostream>
using namespace std;

int main() 
{
    int rows,i,j,k;
    cout<<"Enter number of rows : ";
    cin>>rows;

    for(i = 1;i <= rows;i++) 
    {
        // for printing spaces
        for(j = 1;j <= rows - i;j++) 
        {
            cout << " ";
        }
        // for printing stars
        for(k = 1;k <= (2 * i - 1);k++) 
        {
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}
