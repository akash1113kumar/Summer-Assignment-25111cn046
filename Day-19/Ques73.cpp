// Write a program to Add matrices. 

#include<iostream>
using namespace std;

int main() {
    int rows, columns;
    cout<<"Enter number of rows : ";
    cin>>rows;
    cout<<"Enter number of columns : ";
    cin>>columns;

    int matrix1[rows][columns],matrix2[rows][columns],sum[rows][columns];

    // Input first matrix
    cout<<"Enter elements of first matrix : "<<endl;
    for(int i=0;i<rows;i++) 
    {
        for(int j=0;j<columns;j++) 
        {
            cout<<"Matrix1["<<i<<"]["<<j<<"] = ";
            cin>>matrix1[i][j];
        }
    }

    // Input second matrix
    cout<<"Enter elements of second matrix : "<<endl;
    for(int i=0;i<rows;i++) 
    {
        for(int j=0;j<columns;j++) 
        {
            cout<<"Matrix2["<<i<<"]["<<j<<"] = ";
            cin>>matrix2[i][j];
        }
    }

    // Add matrices
    for(int i=0;i<rows;i++) 
    {
        for(int j=0;j<columns;j++) 
        {
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    // Output result
    cout<<"\nResultant Matrix after Addition : "<<endl;
    for(int i=0;i<rows;i++) 
    {
        for(int j=0;j<columns;j++) 
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
