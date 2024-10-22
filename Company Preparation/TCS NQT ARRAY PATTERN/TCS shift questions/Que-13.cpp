/*
Find the maximum product of the three number in the array.

Exa-1)
Input: 
5
3 -2 -8 4 1
Output: 64
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void GiveMaxProductOfThreeNumber(int n,vector<int>arr)
{
    sort(arr.begin(),arr.end());
    int e1=arr[n-1];
    int e2=arr[n-2];
    int e3=arr[n-3];

    int n1=arr[0];
    int n2=arr[1];
    cout<<"The maximum Product of the three numbers are: ";
    cout<<max(e1*e2*e3,n1*n2*e1);
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

    GiveMaxProductOfThreeNumber(n,arr);    

    return 0;
}