#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void RemoveDublicates1(int arr[],int n)
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    for(auto s:mp)
    {
        if(s.second <= 1)
        {
            cout<<s.first<<" ";
        }
    }
}

int main()
{
    int n;
    cout<<"Entre the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemnts of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    RemoveDublicates1(arr,n);
    
    return 0;
}