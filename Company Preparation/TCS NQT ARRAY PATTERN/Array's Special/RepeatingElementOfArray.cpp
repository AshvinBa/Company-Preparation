#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void RepeatingElement(int arr[],int n)
{
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    for(auto s:mp)
    {
        if(s.second>1)
        {
            cout<<s.first<<" ";
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the Size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Element of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    RepeatingElement(arr,n);
    return 0;
}