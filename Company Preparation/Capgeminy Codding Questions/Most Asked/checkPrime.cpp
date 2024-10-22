//  Check Prime.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    if(n<=1)
    return false;

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    if(checkPrime(n))
    {
        cout<<"Prime Number.";
    }
    else
    {
        cout<<"Not Prime Number.";
    }
    return 0;
}