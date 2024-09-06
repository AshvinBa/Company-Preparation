/* Factorial of the number witout multiplication and division. */


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void factorial1(int n)
{
    int sum=0;
    int ans=n;

    for(int i=n-1;i>0;i--)
    {
        sum=0;
        for(int j=0;j<i;j++)
        {
            sum=sum+ans;
        }
        ans=sum;
    }
    cout<<"Factorial: "<<ans<<endl;
}

void factorial2(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial: "<<fact<<endl;
}

int main()
{
    int n;
    cout<<"Enter the Digit: ";
    cin>>n;
    factorial1(n);
    factorial2(n);

    return 0;
}