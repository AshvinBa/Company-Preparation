/*
Given the array with size n-1 and the digit given range is n
find the missing number in the array.

Example - 1
Input: 
4 
1 2 3 5
Output: 4

Example - 2
Input: 
3
1 3 4
Output: 2

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
1)  Failed in Test case Numbetrb 700.


int checkMissing(int n,int arr[])
{
    int sum=0;
    unordered_map<int,int>mp;
    
    for(int i=1;i<=n;i++)
    {
        mp[i]++;
    }
    
    for(int i=1;i<=n;i++)
    {
        mp[i]++;
    }
    
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    for(auto s:mp)
    {
        if(s.second==2)
        {
            return s.first;
        }
    }
    return -1;
}
*/

int checkMissing(int n, int arr[])
{
    int sum1= n*(n+1)/2;
    int sum2=0;

    for(int i=0;i<n-1;i++)
    {
        sum2+=arr[i];
    }
    int ele=sum1-sum2;
    return ele;
}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Missing Number is: "<<checkMissing(n,arr);
    return 0;
}
