#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Zeros_and_Ones(vector<int>&arr,int n)
{
    int low = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            swap(arr[i],arr[low]);
            low++;
        }
    }

}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the values: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Zeros_and_Ones(arr,n);
    cout<<"Values: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}