#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool SearchElement(vector<int>&arr,int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n,k;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Entr the values: ";
    cin>>k;
    bool ans=SearchElement(arr,n,k);
    if(ans)
    {
        cout<<"Found."<<endl;
    }
    else
    {
        cout<<"Not-Found."<<endl;
    }
}