// Write a program to Find row-wise sum. 

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

    // Calculating row wise sum
    cout<<"\nRow wise sums : "<<endl;
    for(int i=0;i<rows;i++) 
    {
        int rowsum=0;
        for(int j=0;j<columns;j++) 
        {
            rowsum+=matrix[i][j];
        }
        cout<<"Sum of row "<<i<<" = "<<rowsum<<endl;
    }

    return 0;
}
