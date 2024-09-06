#include<bits/stdc++.h>
#include<iostream>
using namespace std;

float MedianOfArray(int arr[],int n)
{
    sort(arr,arr+n);

    if(n%2==0)
    {
        float a=arr[(n/2)-1];
        float b=arr[n/2];
        
        return (a+b)/2;
    }
    else
    {
        return arr[n/2];
    }

}

int main()
{
    int n;
    cout<<"Entre the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemnts of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Median of the array: "<<MedianOfArray(arr,n);
    return 0;
}