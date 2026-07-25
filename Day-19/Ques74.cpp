// Write a program to Subtract matrices. 

#include<iostream>
using namespace std;

int main() {
    int rows, columns;
    cout<<"Enter number of rows : ";
    cin>>rows;
    cout<<"Enter number of columns : ";
    cin>>columns;

    int matrix1[rows][columns],matrix2[rows][columns],substract[rows][columns];

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

    // substracting matrices
    for(int i=0;i<rows;i++) 
    {
        for(int j=0;j<columns;j++) 
        {
            substract[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }

    // Output result
    cout<<"\nResultant Matrix after substraction : "<<endl;
    for(int i=0;i<rows;i++) 
    {
        for(int j=0;j<columns;j++) 
        {
            cout<<substract[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
