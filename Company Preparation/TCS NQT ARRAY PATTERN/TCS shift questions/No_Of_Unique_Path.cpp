/*
Number of Unique Paths

Given a A X B matrix with your initial position at the top-left cell, find the number of possible unique paths to reach the bottom-right cell of the matrix from the initial position.

Note: Possible moves can be either down or right at any point in time, i.e., we can move to matrix[i+1][j] or matrix[i][j+1] from matrix[i][j].

Example 1:
Input:
A = 2, B = 2
Output: 2
Explanation: There are only two unique
paths to reach the end of the matrix of
size two from the starting cell of the
matrix.

Example 2:
Input:
A = 3, B = 4
Output: 10
Explanation: There are only 10 unique
paths to reach the end of the matrix of
size two from the starting cell of the
matrix.

Your Task:
Complete NumberOfPath() function which takes 2 arguments(A and B) and returns the number of unique paths from top-left to the bottom-right cell.

Expected Time Complexity: O(A*B).
Expected Auxiliary Space: O(A*B).

Constraints:
1 ≤ A ≤ 16
1 ≤ B ≤ 16

*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    /*
    1) TLE Solution.
    int f(int i,int j)
    {
        if(i==0 && j==0)
        return 1;
        if(i<0 || j<0)
        return 0;
        
        int up = f(i-1,j);
        int left = f(i,j-1);
        
        return up+left;
    }
    
    int NumberOfPath(int a, int b)
    {
        return f(a-1,b-1);
    }
    */

    /*
    2) Run Succesfuly but on some time give TLE.
    
    int f(int i,int j,vector<vector<int>>&dp)
    {
        if(i==0 && j==0)
        return 1;
        if(i<0 || j<0)
        return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        int up = f(i-1,j ,dp);
        int left = f(i,j-1 ,dp);
        
        return dp[i][j] = up+left;
    }
    
    int NumberOfPath(int a, int b)
    {
        vector<vector<int>> dp(a, vector<int>(b,-1));
        return f(a-1,b-1,dp);
    }
    */
    
    /*
    3)
    
    int NumberOfPath(int a, int b)
    {
        int dp[a][b];
        
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(i==0 && j==0 )
                dp[i][j]=1;
                else
                {
                    int up=0;
                    int left=0;
                    if(i>0) 
                    up= dp[i-1][j];
                    if(j>0)
                    left= dp[i][j-1];
                    dp[i][j]=up+left;
                }
            }
        }
        return dp[a-1][b-1];
    }
    */
    int NumberOfPath(int m, int n)
    {
        int N = n+m-2;
        int r = m-1;
        
        double res=1;
        
        for(int i=1;i<=r;i++)
        {
            res = res*(N-r+i)/i;
        }
        return (int)res;
    }
};

int main()
{
    int a,b;
    cout<<"Enter the value of A and B: ";
        cin>>a>>b;
        Solution ob;
        cout << ob.NumberOfPath(a,b) << endl;
    
}
