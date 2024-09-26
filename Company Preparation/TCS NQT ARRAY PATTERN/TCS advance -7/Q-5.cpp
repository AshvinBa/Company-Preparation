#include<bits/stdc++.h>
using namespace std;
/*
vector<int> pushIntoTheRap(vector<int>arr,int n)
{
    vector<int>ans;
    int k=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            ans.push_back(arr[i]);
            k++;
        }
    }

    while(k!=n)
    {
        ans.push_back(0);
        k++;
    }
    return ans;
}
*/

void pushIntoTheRap(vector<int>&arr,int n)
{
    int j=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main()
{
    vector<int>arr{0,0,1,2,4,5};
    int n=arr.size();

    pushIntoTheRap(arr,n);
    
    cout<<"The Distributed Chocklets are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}