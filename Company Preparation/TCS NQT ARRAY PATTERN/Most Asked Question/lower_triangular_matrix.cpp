/*
Convert the matrix become Lower Triangular Matrix.

matrix = { [1 2 3]
           [4 5 6]
           [7 8 9] }

Output = { [1 0 0]
           [4 5 0]
           [7 8 9] }
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void TriangularMatrix(vector<vector<int>>& matrix,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            matrix[i][j]=0;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<vector<int>>matrix(n , vector<int>(n));
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    TriangularMatrix(matrix,n);
    cout<<"Triangular Matrix values: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}