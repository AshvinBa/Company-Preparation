/*
Find the occurance of the elements.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void OccOfNumber(vector<int>arr,int n)
{
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    for(auto s:mp)
    {
        cout<<s.first<<" occures "<<s.second<<" times "<<endl;
    }
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
    OccOfNumber(arr,n);
    return 0;
}