#include<bits/stdc++.h>
using namespace std;

int Combination(vector<int>&arr , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int q=i; q<=j; q++)
            {
                cout<<arr[q];
                if(q!=j)
                {
                    cout<<" ";
                }
            } 
            if(i!=n-1)
            {
                cout<<" , ";
            }
        }
    }
    return 0;
}

int main()
{
    
    int n = 0;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements: ";
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    Combination(arr,n);
    return 0;
}