// Write a program to Transpose matrix.

#include<iostream>
using namespace std;

int main() {
    int rows, columns;
    cout<<"Enter number of rows : ";
    cin>>rows;
    cout<<"Enter number of columns : ";
    cin>>columns;

    int matrix[rows][columns],transpose[columns][rows];

    // Input matrix
    cout<<"Enter elements of matrix : "<<endl;
    for(int i=0;i<rows;i++) 
    {
        for(int j=0;j<columns;j++) 
        {
            cout<<"Matrix1["<<i<<"]["<<j<<"] = ";
            cin>>matrix[i][j];
        }
    }

    // Transpose matrix
    for(int i=0;i<rows;i++) 
    {
        for(int j=0;j<columns;j++) 
        {
            transpose[j][i]=matrix[i][j];
        }
    }

    // Output Transpose matrix
    cout<<"\nTranspose matrix : "<<endl;
    for(int i=0;i<columns;i++) 
    {
        for(int j=0;j<rows;j++) 
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
