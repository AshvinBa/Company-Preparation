#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int SumOfTheArrayElement(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the values: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values; ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=SumOfTheArrayElement(arr,n);
    cout<<"Sum of the Array Elemnt is: "<<ans;
    return 0;
}