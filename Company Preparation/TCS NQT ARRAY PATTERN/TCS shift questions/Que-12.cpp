#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int FindTheMaxDiff(vector<int>vec,int n)
{
    int largest=INT_MIN;
    int maxDiff=INT_MIN;

    for(int i=n;i>=0;i--)
    {
        int num=vec[i];
        largest=max(num,largest);
        maxDiff=max(maxDiff,largest-num);
    }
    return maxDiff;
}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int>vec(n);
    cout<<"ENtre the values: ";
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    cout<<"The Max Difference is: "<<FindTheMaxDiff(vec,n);
    return 0;
}