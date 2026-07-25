// Write a program to Find column-wise sum.

#include<iostream>
using namespace std;

int main()
{
    int rows,columns;
    cout<<"Enter number of rows : ";
    cin>>rows;
    cout<<"Enter number of columns : ";
    cin>>columns;

    int matrix[rows][columns];

    // Inputig matrix
    cout<<"Enter elements of the matrix : "<<endl;
    for(int i=0;i<rows;i++) 
    {
        for(int j=0;j<columns;j++) 
        {
            cout<<"Matrix["<<i<<"]["<<j<<"] = ";
            cin>>matrix[i][j];
        }
    }

    // Calculating column wise sum
    cout<<"\nColumn wise sums : "<<endl;
    for(int i=0;i<rows;i++) 
    {
        int columnsum=0;
        for(int j=0;j<columns;j++) 
        {
            columnsum+=matrix[j][i];
        }
        cout<<"Sum of column "<<i<<" = "<<columnsum<<endl;
    }

    return 0;
}
