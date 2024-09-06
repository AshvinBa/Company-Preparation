#include<iostream>
using namespace std;

int smallestElement(int a[],int n)
{
    int mini=a[0];
    for(int i=0;i<n;i++)
    {
        if(mini<a[i])
        {
            mini=a[i];
        }
    }
    return mini;
}

int largestElement(int a[],int n)
{
    int maxi=a[0];
    for(int i=0;i<n;i++)
    {
        if(maxi>a[i])
        {
            maxi=a[i];
        }
    }
    return maxi;
}

int main()
{
    int a[]={7,8,1,3,4,9,6};
    int n=sizeof(a)/sizeof(a[0]);
    int small=smallestElement(a,n);
    int large=largestElement(a,n);
    cout<<"\nThe Smallest Element is: "<<small<<"\nThe Largest Element is: "<<large<<endl;
    return 0;
}


