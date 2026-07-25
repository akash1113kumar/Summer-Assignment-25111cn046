// Write a program to Multiply matrices. 

#include<iostream>
using namespace std;

int main() 
{
    int rows1,columns1,rows2,columns2;

    cout<<"Enter number of rows for first matrix : ";
    cin>>rows1;
    cout<<"Enter number of columns for first matrix : ";
    cin>>columns1;

    cout<<"Enter number of rows for second matrix : ";
    cin>>rows2;
    cout<<"Enter number of columns for second matrix : ";
    cin>>columns2;

    // Checking if multiplication is possible
    if(columns1 !=rows2)
    {
        cout<<"Matrix multiplication is not possible. \nColumns of first matrix must be equal of rows of second matrix."<<endl;
        return 0;
    }

    int matrix1[rows1][columns1],matrix2[rows2][columns2],product[rows1][columns2];

    // Inputing first matrix
    cout<<"Enter elements of first matrix : "<<endl;
    for(int i=0;i<rows1;i++) 
    {
        for(int j=0;j<columns1;j++) 
        {
            cout<<"Matrix1["<<i<<"]["<<j<<"] = ";
            cin>>matrix1[i][j];
        }
    }

    // Inputing second matrix
    cout<<"Enter elements of second matrix : "<<endl;
    for(int i=0;i<rows2;i++) 
    {
        for(int j=0;j<columns2;j++) 
        {
            cout<<"Matrix2["<<i<<"]["<<j<<"] = ";
            cin>>matrix2[i][j];
        }
    }

    // setting elements of product matrix to 0 ,in order to replace with garbage value.
    for(int i=0;i<rows1;i++) 
    {
        for(int j=0;j<columns2;j++) 
        {
            product[i][j]=0;
        }
    }

    // Matrix multiplication
    for(int i=0;i<rows1;i++) 
    {
        for(int j=0;j<columns2;j++) 
        {
            for(int k=0;k<columns1;k++) 
            {
                product[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    // Output product matrix
    cout<<"\nResultant Matrix after Multiplication : "<<endl;
    for(int i=0;i<rows1;i++) 
    {
        for(int j=0;j<columns2;j++) 
        {
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
