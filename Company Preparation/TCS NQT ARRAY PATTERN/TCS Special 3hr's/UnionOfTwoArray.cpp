#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void UnionOfTwoArray1(int arr1[],int arr2[],int n1,int n2)
{
    vector<int>ans(n1+n2);
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            ans[k++]=arr1[i];
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            ans[k++]=arr2[j];
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            ans[k++]=arr1[i];
            i++;
            j++;
        }
    }
    while(i<n1)
    {
        ans[k++]=arr1[i++];
    }
    while(j<n2)
    {
        ans[k++]=arr2[j++];
    }

    int n=ans.size();

    cout<<"The Union of the array is: "<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<ans[i]<<" ";
    }
}

void UnionOfTwoArray2(int arr1[],int arr2[],int n1,int n2)
{
    set<int>s;

    for(int i=0;i<n1;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        s.insert(arr2[i]);
    }
    for(auto ans:s)
    {
        cout<<ans<<" ";
    }
}


int main()
{
    int arr1[]={1,2,3,4,6};
    int arr2[]={2,3,5};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    UnionOfTwoArray1(arr1,arr2,n1,n2);
    cout<<endl;
    UnionOfTwoArray2(arr1,arr2,n1,n2);
    return 0;
}