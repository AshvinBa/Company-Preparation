/* Merge two sorted Array.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void MergeTwoArray(vector<int>arr1,int n1,vector<int>arr2,int n2)
{
    vector<int>vec;

    for(int i=0;i<n1;i++)
    {
        vec.push_back(arr1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        vec.push_back(arr2[i]);
    }
    sort(vec.begin(),vec.end());

    cout<<"The Merge Sorted Array is: "<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
}

int main()
{
    int n1,n2;
    cout<<"Enter the size of Arr-1: ";
    cin>>n1;
    cout<<"Enter the size of Arr-2: ";
    cin>>n2;
    vector<int>arr1(n1);
    vector<int>arr2(n2);
    cout<<"Enter the elements of Array-1: ";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }

    cout<<"Enter the elements of Array-2: ";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    MergeTwoArray(arr1,n1,arr2,n2);
    return 0;
}