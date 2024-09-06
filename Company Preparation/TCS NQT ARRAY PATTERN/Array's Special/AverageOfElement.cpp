#include<bits/stdc++.h>
using namespace std;
int AverageOfElement(int arr[],int n)
{
    int sum=0;
    int digit=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        digit++;
    }
    float avg=(sum/digit);
    cout<<"The Average is: "<<avg;
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
    AverageOfElement(arr,n);
    return 0;
}