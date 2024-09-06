/* Find the pair of the sum is divisible by two. */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int PairOfSum(int n,int arr[])
{
    int i=0;
    int j=0;
    int cnt=0;
    map<pair<int,int>,bool>mp;

    while(i<n)
    {
        j=i+1;
        while(j<n)
        {
            int a=arr[i];
            int b=arr[j];
            int sum=a+b;
            pair<int,int>p=make_pair(a,b);
            if(sum%2==0 && mp[p] != true)
            {
                cnt++;
                mp[p]=true;
            }
            j++;
        }
        i++;
    }
    return cnt;
}
int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Number of Pairs are: "<<PairOfSum(n,arr);
    return 0;
}