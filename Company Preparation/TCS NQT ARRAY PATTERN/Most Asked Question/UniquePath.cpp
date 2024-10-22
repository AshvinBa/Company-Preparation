// Unique Paths in Grid.

// Example - 1: 

// Input: m=3 , n=2

// Output: 3

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int UniquePath(int m,int n)
{
    vector<vector<int>> dp(m,vector<int>(n, 1));

    for(int i = 1; i < m; i++)
    {
        for(int j = 1; j < n; j++)
        {
            dp[i][j]=dp[i-1][j] + dp[i][j-1];
        }
    }
    return dp[m-1][n-1];
}

int main()
{
    int m,n;
    cout<<"Enter the value of M and N: ";
    cin>>m>>n;
    cout<<"The Unique Path are: "<<UniquePath(m,n);
    return 0;
}