#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> countTheMajority(vector<int>arr,int n)
{
    vector<int>vec;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    for(auto s:mp)
    {
        if(s.second >= n/2)
        {
            vec.push_back(s.first);
        }
    }
    return vec;
}

int main()
{
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>ans = countTheMajority(arr,n);
    cout<<"The digit are: ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}