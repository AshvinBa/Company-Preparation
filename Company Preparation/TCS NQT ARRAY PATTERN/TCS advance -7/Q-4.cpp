#include<iostream>
using namespace std;

int findingEquilibrium(int arr[],int n)
{
    int leftsum[n];
    int rightsum[n];

    int left=0;
    for(int i=0;i<n;i++)
    {
        leftsum[i]=left;
        left+=arr[i];
    }

    int right=0;
    for(int i=n-1;i>=0;i--)
    {
        rightsum[i]=right;
        right+=arr[i];
    }
    

    for(int i=0;i<n;i++)
    {
        if(leftsum[i]==rightsum[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n=7;
    int arr[n]={-7,1,5,2,-4,3,0};

    int index=findingEquilibrium(arr,n);
    cout<<"The Equilibrium index is: "<<index;
    return 0;
}

