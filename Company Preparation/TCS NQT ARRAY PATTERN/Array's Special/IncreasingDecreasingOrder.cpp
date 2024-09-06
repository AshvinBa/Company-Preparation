#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void IncreasDecreasOrder(int n,vector<int>&arr)
{
    sort(arr.begin(),arr.end());
    int start=n/2;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start++],arr[end--]);
    }
}

int main()
{
    int n;
    cout<<"Entre the size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    IncreasDecreasOrder(n,arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}