#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int MaximumProductOfSubarray(int n,vector<int>&arr)
{
    int pre=1, suff=1;
    int ans=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(pre==0)
        pre=1;
        if(suff==0)
        suff=1;

        pre=pre*arr[i];
        suff=suff*arr[n-i-1];
        ans=max(ans,max(pre,suff));
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the Size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the Element of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Product of the max sub Array is: "<<MaximumProductOfSubarray(n,arr);
    return 0; 
}