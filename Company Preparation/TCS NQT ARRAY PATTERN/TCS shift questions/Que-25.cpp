// Sum of Unique Element.

// In give array your task is to make the sum of unique element in the arra. which is found only one's. 

// Example - 1)
// Input: 
// num = 1 2 3 4
// Output: 
// sum = 4 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int uniqueSum(int arr[],int n)
{
    map<int,int>mp;

    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    int sum=0;
    for(auto s:mp)
    {
        if(s.second == 1)
        {
            sum+=s.first;
        }
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Unique sum is: "<<uniqueSum(arr,n);
    return 0;
}