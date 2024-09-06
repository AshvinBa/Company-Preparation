#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the digit: ";
    cin>>n;
    int arr[100];
    cout<<"Enter the elements: ";
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    int ans=0;

    for(int i=0;i<n-1;i++)
    {
        ans+=arr[i];
    }

    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    
    int digit=sum-ans;
    cout<<"The Missing Number is: "<<digit;
}