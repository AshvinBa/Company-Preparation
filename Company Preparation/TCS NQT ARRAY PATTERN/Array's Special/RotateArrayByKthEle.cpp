#include<bits/stdc++.h>
using namespace std;

vector<int> RotateByKth(int n,int arr[],int k)
{
    vector<int>temp;
    int i=0;
    while(i<n)
    {
        temp[i]=arr[(i+k)%n];
        i++;
    }
    return temp;
}

int main()
{
    int n;
    cout<<"Enter the values: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values; ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the position: ";
    cin>>k;

    vector<int>ans=RotateByKth(n,arr,k);

    cout<<"Rotated Values are: ";
    for(int i=ans.begin();i<ans.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}