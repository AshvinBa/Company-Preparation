/*
Number Of Occurance.

Input : arr[] = [10,5,10,15,5,10,15]
Output : 
        10 - 3
        5 - 2
        15 - 2
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void OccuranceOfNumber(int arr[],int n)
{
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    for(auto a:mp)
    {
        cout<<a.first <<" "<<a.second<<endl;
    }
}

int main()
{
    int  arr[] = {10,5,10,15,5,10,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    OccuranceOfNumber(arr,n);
    return 0;
}