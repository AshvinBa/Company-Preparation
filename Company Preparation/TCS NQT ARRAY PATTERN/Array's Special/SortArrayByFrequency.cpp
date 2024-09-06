#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void SortByFrequency(vector<int>&arr,int n)
{
    unordered_map<int,int>store;

    for(int num:arr)
    {
        store[num]++;
    }
    vector<pair<int,int>>ans;

    for(auto& it:store)
    {
        ans.push_back(make_pair(it.first,it.second));
    }
    sort(ans.begin(),ans.end(),[]( const pair<int,int>&a, const pair<int,int>&b)
    {
        return a.second>b.second;
    });

    cout<<"Sorted by Frequency: "<<endl;
    for(auto& p:ans)
    {
        cout<<p.first<<" : "<<p.second<<endl;
    }
}

int main()
{
    int n;
    vector<int> arr{1,2,2,3,3,3,4,1,5};
    n=sizeof(arr)/sizeof(arr[0]);
    SortByFrequency(arr,n);
    return 0;
}