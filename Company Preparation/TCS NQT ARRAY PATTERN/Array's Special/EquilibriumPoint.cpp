#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void EquilibriumPint(vector<int>arr,int n)
{
    vector<int>pref;
    vector<int>suff;
    int pr=0,sf=0;
    for(int i=0;i<n;i++)
    {
        pr=pr+arr[i];
        pref.push_back(pr);
    }
    for(int i=0;i<n;i++)
    {
        sf=sf+arr[i];
        suff.push_back(sf);
    }
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        if(suff[i]==pref[i])
        {
            ans=i;
        }
    }
    cout<<"The equilibrium is: "<<ans;
}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    EquilibriumPint(arr,n);
    return 0;
}