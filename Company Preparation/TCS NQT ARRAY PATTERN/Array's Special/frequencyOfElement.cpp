#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
void countFrequencyOfElement(int arr[],int n)
{
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    for(auto s:mp)
    {
        if(s.second>1)
        {
            cout<<s.first<<" "<<s.second<<endl;
        }
    }
}
*/

void countFrequencyOfElement(int arr[],int n)
{
    int count=0;
    // vector<int,bool>visit(n,false);
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }

}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>ans;
    countFrequencyOfElement(arr,n);
    return 0;
}