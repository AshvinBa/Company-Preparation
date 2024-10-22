/*  Check the Perfect Number.

Input: 28
Output: True.
Explaination: 1,2,4,7,14
*/

#include<iostream>
using namespace std;

/*
Bruoth-force Approach. 

bool CheckPerfectNumber(int n)
{
    int sum = 0;
    for(int i=1;i+i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return sum == n;
}
*/

/* Optimal Approach with T.C.= O(N) */

bool CheckPerfectNumber(int n)
{
    if(n <= 1)
    return false;
    int sum = 1;

    for(int i=2;i*i<=n;i++)
    {
        if( n % i == 0 )
        {
            sum+=i;
            if( i != n/i )
            {
                sum+=n/i;
            }
        }
    }
    return sum == n;
}

int main()
{
    int n;
    cout<<"Enter the values: ";
    cin>>n;

    if(CheckPerfectNumber(n))
    {
        cout<<"True.";
    }
    else
    {
        cout<<"False.";
    }
    return 0;
}