// Write a program to Check symmetric matrix. 

#include<iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter the size of square matrix : ";
    cin>>n;

    int matrix[n][n];

    // Input matrix
    cout<<"Enter elements of the matrix : "<<endl;
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<n;j++) 
        {
            cout<<"Matrix["<<i<<"]["<<j<<"] = ";
            cin>>matrix[i][j];
        }
    }

    bool symmetric=true;

    // Check symmetry : matrix[i][j] == matrix[j][i]
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<n;j++) 
        {
            if(matrix[i][j] !=matrix[j][i]) 
            {
                symmetric=false;
                break;
            }
        }
        if(!symmetric) 
        { 
            break;
        }
    }

    if(symmetric) 
    {
        cout<<"\nThe matrix is symmetric."<<endl;
    } else 
    {
        cout<<"\nThe matrix is not symmetric."<<endl;
    }

    return 0;
}
