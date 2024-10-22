#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void checkDublicate(int arr[],int n)
{
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto i:mp)
    {
        if(i.second > 1)
        {
            cout<<i.first<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];    
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    checkDublicate(arr,n);
    return 0;
}