// Write a program to Find diagonal sum. 

#include<iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter the size of square matrix : ";
    cin>>n;

    int matrix[n][n];

    // Inputing matrix
    cout<<"Enter elements of the matrix : "<<endl;
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<n;j++) 
        {
            cout<<"Matrix["<<i<<"]["<<j<<"] = ";
            cin>>matrix[i][j];
        }
    }

    int primarysum=0,secondarysum=0;

    // Calculating diagonal sums
    for(int i=0;i<n;i++) 
    {
        primarysum+=matrix[i][i];             // Primary diagonal sum
        secondarysum+=matrix[i][n - i - 1];   // Secondary diagonal sum
    }

    cout<<"\nPrimary Diagonal Sum = "<<primarysum<<endl;
    cout<<"Secondary Diagonal Sum = "<<secondarysum<<endl;
    cout<<"Total Diagonal Sum = "<<(primarysum+secondarysum)<<endl;

    return 0;
}
