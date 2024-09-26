/*
Find the rank of the array element,

Example-1)

Input: 4,2,6,8,7,3
Output: 3,1,4,6,5,2

Example-2)

Input: 1 2 3 4 5 8 7
Output: 1 2 3 4 5 7 6

*/


#include<bits/stdc++.h>
using namespace std;

void ranking_of_numeber(vector<int>arr,int n)
{
    vector<int>brr(n);

    for(int i=0;i<n;i++)
    {
        brr[i]=arr[i];
    }
    unordered_map<int,int>mp;
    int rank=1;
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++)
    {
        if(!mp.count(arr[i]))  /*It Check that if the element is not present then add into the map and its rank also added.*/
        {
            mp[arr[i]]=rank;
            rank++;
        }
    }
    cout<<"\nThe Rank of the Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<mp[brr[i]]<<" ";
    }
}

int main()
{
    vector<int>arr{2,20,15,26,2,98,6};
    int n=arr.size();

    ranking_of_numeber(arr,n);
    return 0;
}