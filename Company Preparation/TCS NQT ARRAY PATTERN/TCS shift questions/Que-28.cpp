#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int NumerOfSubarray(vector<int>arr,int n,int k)
{
    unordered_map<int,int>mp;
    mp[0]=1;
    int preSum = 0 , cnt = 0;

    for(int i=0;i<n;i++)
    {
        preSum += arr[i];
        int rest = preSum - k;
        cnt += mp[rest];
        mp[preSum]+=1;
    }
    return cnt;
}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=0;
    cout<<"Enter the Value of K: ";
    cin>>k;
    cout<<"The Number of Subarray is: "<<NumerOfSubarray(arr,n,k);
    return 0;
}