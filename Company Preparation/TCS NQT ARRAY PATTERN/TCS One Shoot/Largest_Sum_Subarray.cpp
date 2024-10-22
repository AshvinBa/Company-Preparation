/*
Max Sum Sub-Array.

Input: 
    arr[] = {-2,1,-3,4,-1,2,1,-5,4}

Output: 6
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LargestSumSubArray(int n,vector<int>arr)
{
    int max_so_far = arr[0];
    int curr_sum = 0;

    for(int i=0;i<n;i++)
    {
        curr_sum += arr[i];

        if(max_so_far < curr_sum)
        {
            max_so_far = max(max_so_far,curr_sum);
        }
        if(curr_sum < 0)
        {
            curr_sum = 0;
        }
    }
    return max_so_far;
}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the Values: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Largest Sum is: "<<LargestSumSubArray(n,arr);

    return 0;
}