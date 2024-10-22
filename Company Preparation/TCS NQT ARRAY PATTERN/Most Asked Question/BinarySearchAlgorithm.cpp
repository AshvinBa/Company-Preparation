// Binary Search.
// Return the index of K Digit.
// Input : 
// arr[] = { 1,2,3,4,5,6}
// k = 4
// op: = 3

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>arr,int n,int k)
{
    int s=0;
    int e=n-1;
    int mid = (s+e)/2;

    while(s<=e)
    {
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid] < k)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter the Element: ";
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int k;
    cout<<"Enter the search value: ";
    cin>>k;
    cout<<"The Index of the Element: "<<BinarySearch(vec,n,k);
    return 0;
}